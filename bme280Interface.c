#include "stdint.h"
#include "string.h"

#include "nrf51.h"
#include "nrf_timer.h"
#include "nrf_gpio.h"
#include "nrf_nvmc.h"
#include "nrf_delay.h"

#include "sdk_config.h"
#include "sdk_errors.h"
#include "nrf_drv_twi.h"

#include "BME280_user_interface.h"
#include "bme280Interface.h"

#define TWI_INSTANCE_ID  TWI0_INSTANCE_INDEX
#define TIMER_INT_MS     10
#define MY_TIM           NRF_TIMER1

static   nrf_drv_twi_t twiSensor = NRF_DRV_TWI_INSTANCE(TWI_INSTANCE_ID);
uint32_t cntMs = 0;
uint8_t  txData[40];


const uint32_t timFrqList[]=
{
    [NRF_TIMER_FREQ_16MHz]    = 16000000, ///< Timer frequency 16 MHz.
    [NRF_TIMER_FREQ_8MHz]     = 8000000,  ///< Timer frequency 8 MHz.
    [NRF_TIMER_FREQ_4MHz]     = 4000000,  ///< Timer frequency 4 MHz.
    [NRF_TIMER_FREQ_2MHz]     = 2000000,  ///< Timer frequency 2 MHz.
    [NRF_TIMER_FREQ_1MHz]     = 1000000,  ///< Timer frequency 1 MHz.
    [NRF_TIMER_FREQ_500kHz]   = 500000,   ///< Timer frequency 500 kHz.
    [NRF_TIMER_FREQ_250kHz]   = 250000,   ///< Timer frequency 250 kHz.
    [NRF_TIMER_FREQ_125kHz]   = 125000,   ///< Timer frequency 125 kHz.
    [NRF_TIMER_FREQ_62500Hz]  = 62500,    ///< Timer frequency 62500 Hz.
    [NRF_TIMER_FREQ_31250Hz]  = 31250     ///< Timer frequency 31250 Hz.
};


void timerInit(void)
{
    /*-------------Config timer for interrupt in CC---------*/
    uint32_t valCC = (timFrqList[NRF_TIMER_FREQ_250kHz] / 1000) * TIMER_INT_MS;
    nrf_timer_mode_set(MY_TIM, NRF_TIMER_MODE_TIMER);
    nrf_timer_bit_width_set(MY_TIM, NRF_TIMER_BIT_WIDTH_16);
    nrf_timer_frequency_set(MY_TIM, NRF_TIMER_FREQ_250kHz);
    nrf_timer_cc_write(MY_TIM, NRF_TIMER_CC_CHANNEL0, valCC);
    nrf_timer_int_enable(MY_TIM, (0b1 << 16));

    NVIC_SetPriority(TIMER1_IRQn, 3);
    NVIC_EnableIRQ(TIMER1_IRQn);

    nrf_timer_task_trigger(MY_TIM, NRF_TIMER_TASK_START);
}


/*
void gpioInit(void)
{
    nrf_gpio_cfg_output(LED_CONTROL_PIN);
    nrf_gpio_cfg_output(CONTROL_PIN);
}
*/

void TIMER1_IRQHandler(void)
{
    cntMs++;
    /*
    static uint16_t intCounter = 0;
    uint8_t wordCnt = configFlash->saveData[0];
    if( intCounter++ > (UPDATE_NAME_S*1000/TIMER_INT_MS) )
    {
        if(memcmp(defName, configFlash->deviceName, 11 ) != 0)
        {
            memcpy(configUpdate.deviceName, defName, sizeof(defName));
        }
        else
        {
            memcpy(configUpdate.deviceName, configFlash->deviceName, sizeof(defName));
        }

        if ( ++wordCnt >= sizeof(mat))
        {
            wordCnt = 0;
        }

        configUpdate.saveData[0] = wordCnt;
        configUpdate.deviceName[12] = mat[wordCnt];
        nrf_nvmc_page_erase(GET_PAGE_ADDRESS(CONFIG_PAGE));
        nrf_nvmc_write_bytes(GET_PAGE_ADDRESS(CONFIG_PAGE), (uint8_t*)&configUpdate, sizeof(configurationS_t));

        NVIC_SystemReset();
    }
    */
    nrf_timer_task_trigger(MY_TIM, NRF_TIMER_TASK_CLEAR);
    nrf_timer_event_clear(MY_TIM, NRF_TIMER_EVENT_COMPARE0);
    /*
    nrf_gpio_pin_toggle(LED_CONTROL_PIN);
    */
}


ret_code_t bme280InterfaceInit(void)
{
    ret_code_t err_code;
    nrf_drv_twi_config_t twiConfig = {
        .scl                = 1,     ///< SCL pin number.
        .sda                = 2,     ///< SDA pin number.
        .frequency          = TWI_FREQUENCY_FREQUENCY_K400,           ///< TWI frequency.
        .interrupt_priority = 0,      ///< Interrupt priority.
        .clear_bus_init     = false,  ///< Clear bus during init.
        .hold_bus_uninit    = true,  ///< Hold pull up state on gpio pins after uninit.
    };
    err_code = nrf_drv_twi_init(&twiSensor,
                                &twiConfig,
                                NULL,
                                NULL);
    if( err_code != 0)
    {
        return err_code;
    }
    nrf_drv_twi_enable(&twiSensor);
    return 0;
}


TRANSACION_STATUS BMEReadData (uint8_t sensorAddress, uint8_t sensorReagister, uint8_t *data, uint8_t numData)
{
    ret_code_t rex_Rx;
    txData[0] = sensorReagister;
    rex_Rx = nrf_drv_twi_tx	(&twiSensor,
                             sensorAddress,
                             txData,
                             1,
                             true
                            );
    if(rex_Rx != NRF_SUCCESS)
    {
        return TRANSACION_STATUS_ERROR;
    }
    rex_Rx = nrf_drv_twi_rx	(&twiSensor,
                             sensorAddress,
                             data,
                             numData
                            );

    return (rex_Rx == NRF_SUCCESS) ? (TRANSACION_STATUS_OK) : (TRANSACION_STATUS_ERROR);
}


TRANSACION_STATUS BMEWriteData(uint8_t sensorAddress, uint8_t sensorReagister, uint8_t *data, uint8_t numData)
{
    ret_code_t rex_Tx;
    txData[0] = sensorReagister;
    memcpy(&txData[1], data, numData);
    rex_Tx = nrf_drv_twi_tx	(&twiSensor,
                             sensorAddress,
                             txData,
                             numData + 1,
                             false
                            );
    return (rex_Tx == NRF_SUCCESS) ? (TRANSACION_STATUS_OK) : (TRANSACION_STATUS_ERROR);
}


inline uint32_t getSysTime(void)
{
    return cntMs;
}

uint32_t  sensorGetTime(void)
{
    return getSysTime();
}

