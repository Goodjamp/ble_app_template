#include "stdint.h"
#include "string.h"

#include "sdk_errors.h"

#include "i2cHAL.h"
#include "systemTime.h"

#include "BME280_user_interface.h"

#define I2C_BUFF_SIZE  20

static uint8_t i2cBuff[I2C_BUFF_SIZE];

TRANSACION_STATUS BMEReadData (uint8_t sensorAddress, uint8_t sensorReagister, uint8_t *data, uint8_t numData)
{
    return ((i2cRead(sensorAddress, &sensorReagister, 1, data, numData) == NRF_SUCCESS) ?
           (TRANSACION_STATUS_OK) :
           (TRANSACION_STATUS_ERROR));
}


TRANSACION_STATUS BMEWriteData(uint8_t sensorAddress, uint8_t sensorReagister, uint8_t *data, uint8_t numData)
{
    i2cBuff[0] = sensorReagister;
    memcpy(&i2cBuff[1], data, numData);
    return (i2cWrite(sensorAddress, i2cBuff, numData + 1) == NRF_SUCCESS) ?
           (TRANSACION_STATUS_OK) :
           (TRANSACION_STATUS_ERROR);
}

uint32_t sensorGetTime(void)
{
    return getSystemTime();
}

