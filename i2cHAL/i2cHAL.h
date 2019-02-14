#ifndef _I2C_HAL_H_
#define _I2C_HAL_H_

ret_code_t i2cInit(void);
ret_code_t i2cRead (uint8_t deviceAddress, uint8_t *txData, uint16_t txDataSize, uint8_t *rxData, uint16_t rxDataSize);
ret_code_t i2cWrite(uint8_t deviceAddress, uint8_t *txData, uint16_t txDataSize);

#endif
