/* file: bme280Interface.h

*/
#ifndef BME280INTERFACE_H_
#define BME280INTERFACE_H_

#include "stdint.h"

#define SENSOR_ADDRESS

uint32_t  getSysTime(void);
void timerInit(void);
ret_code_t bme280InterfaceInit(void);

#endif
