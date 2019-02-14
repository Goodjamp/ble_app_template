#ifndef _SYSTEM_TIME_H_
#define _SYSTEM_TIME_H_
#include "stdint.h"
#include "stdbool.h"

void     systemTimeInit(void);
uint32_t getSystemTime(void);
bool isTimeout(uint32_t startTime, uint32_t timeout);

#endif
