#include "stdint.h"

#include "nrf51.h"
#include "nrf_timer.h"
#include "nrf_gpio.h"

#include "sdk_config.h"
#include "sdk_errors.h"
#include "nrf_drv_twi.h"

#define TIMER_INT_MS     1
#define MY_TIM           NRF_TIMER1

static uint32_t cntMs = 0;


static const uint32_t timFrqList[]=
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


void systemTimeInit(void)
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

uint32_t getSystemTime(void)
{
    return cntMs;
}

bool isTimeout(uint32_t startTime, uint32_t timeout)
{
    return ((cntMs >= startTime) ? (cntMs - startTime) : (cntMs + ~(uint32_t)0 - startTime)) >= timeout;
}
