#ifndef _SCREEN_HALL_H_
#define  _SCREEN_HALL_H_

#include "stdint.h"
#include "stdbool.h"

typedef enum {
    ARIAL_8PTS,
    ARIAL_12PTS,
}SymbolType;



bool sendTestString(void);
bool screenClearBuff(void);
bool screenSetPosition(uint8_t inX, uint8_t inY);
bool screenAddString(const uint8_t *str, SymbolType symbolType);
bool screenAddImage(const uint8_t *image, uint8_t imageHeigh, uint8_t imageWidth);
bool screenSend(void);

#endif
