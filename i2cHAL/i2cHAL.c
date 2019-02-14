#include "stdint.h"
#include "string.h"

#include "nrf51.h"
#include "nrf_gpio.h"
#include "nrf_nvmc.h"
#include "nrf_delay.h"

#include "sdk_config.h"
#include "sdk_errors.h"
#include "nrf_drv_twi.h"

#define TWI_INSTANCE_ID  TWI0_INSTANCE_INDEX

static nrf_drv_twi_t twiSensor = NRF_DRV_TWI_INSTANCE(TWI_INSTANCE_ID);

ret_code_t i2cInit(void)
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


ret_code_t i2cRead (uint8_t deviceAddress, uint8_t *txData, uint16_t txDataSize, uint8_t *rxData, uint16_t rxDataSize)
{
    ret_code_t rezRx;
    rezRx = nrf_drv_twi_tx(&twiSensor,
                            deviceAddress,
                            txData,
                            txDataSize,
                            true);
    if(rezRx != NRF_SUCCESS)
    {
        return rezRx;
    }
    rezRx = nrf_drv_twi_rx(&twiSensor,
                             deviceAddress,
                             rxData,
                             rxDataSize);
    return rezRx;
}


ret_code_t i2cWrite(uint8_t deviceAddress, uint8_t *txData, uint16_t txDataSize)
{
    ret_code_t rezTx;
    rezTx = nrf_drv_twi_tx	(&twiSensor,
                             deviceAddress,
                             txData,
                             txDataSize,
                             false);
    return rezTx;
}
