#include "stdint.h"
#include "string.h"

#include "screenHall.h"
#include "displaySsd1306HAL.h"

#include "symbolsArial12pts.symb"
#include "symbolsArial8pts.symb"



static DisplayFrame displayFrame;

static uint8_t x;
static uint8_t y;

static const uint8_t* getSymbol(const uint8_t *symbol,
                                          uint8_t *height,
                                          uint8_t *width,
                                          SymbolType symbolType)
{
#define WIDTH_POS   0
#define HEIGHT_POS  1
#define ADDRESS_POS 2
    uint8_t symbolQyantity;
    const uint16_t (*symbolDescr)[3];
    const uint8_t *symbolList;
    switch(symbolType) {
    case ARIAL_8PTS:
        symbolQyantity = sizeof(arial_8ptDescriptors)/sizeof(arial_8ptDescriptors[0]);
        symbolDescr    = (const uint16_t(*)[3])arial_8ptDescriptors;
        symbolList     = arial_8ptBitmaps;
        break;
    case ARIAL_12PTS:
        symbolQyantity = sizeof(arial_11ptDescriptors)/sizeof(arial_11ptDescriptors[0]);
        symbolDescr    = (const uint16_t(*)[3])arial_11ptDescriptors;
        symbolList     = arial_11ptBitmaps;
        break;
    }

    uint8_t pos = *symbol - '!';
    if(pos >= symbolQyantity) {
        return NULL;
    }

    *height = symbolDescr[pos][HEIGHT_POS];
    *width  = symbolDescr[pos][WIDTH_POS];
    return symbolList + symbolDescr[pos][ADDRESS_POS];
}

static bool addImage(const uint8_t *image, uint8_t heigh, uint8_t width)
{
    uint8_t  (*tImage)[width] = (uint8_t(*)[width])image;
    uint8_t yByte = y >> 3;
    uint8_t yBit = y - yByte * 8;
    uint8_t k;
    uint8_t i = 0;
    uint8_t yImag = 0;
    uint8_t shiftImg = 0;

    while(yImag < heigh) {
        yImag += 8 - ( shiftImg = (yImag < heigh) ? (yBit) : (0));
        for(k = 0; k < width; k++) {
            displayFrame.buffer[yByte][x + k] |= (tImage[i][k] << shiftImg);
        }
        i = yImag >> 3;
        yImag += 8 - ( shiftImg = (yImag < heigh) ? (8 - yBit) : (0));
        if(shiftImg == 0) {
            break;
        }
        yByte++;
        for(k = 0; k < width; k++) {
            displayFrame.buffer[yByte][x + k] |= (tImage[i][k] >> shiftImg);
        }
        i = yImag >> 3;
    }
    return true;
}

bool screenAddString(const uint8_t *str, SymbolType symbolType)
{
    #define SPACE_BITS  2
    const uint8_t *symbol;
    uint8_t symbolHeigh;
    uint8_t symbolWidth;
    while(*str) {
        symbol = getSymbol(str, &symbolHeigh, &symbolWidth, symbolType);
        if((*str == ' ') || (symbol == NULL)) {
            x += SPACE_BITS;
            str++;
            continue;
        }

        if((x + symbolWidth) >= FRAME_WIDTH_DOT) {
           if((y + symbolHeigh) >= FRAME_HEIGHT_DOT) {
               return false;
           }
           y += symbolHeigh;
           x = 0;
        }

        addImage(symbol, symbolHeigh, symbolWidth);
        x += symbolWidth + SPACE_BITS;
        str++;
    }
    return true;
}

bool screenAddImage(const uint8_t *image, uint8_t imageHeigh, uint8_t imageWidth)
{
    return addImage(image, imageHeigh, imageWidth);
}


bool screenClearBuff(void)
{
   memset(displayFrame.buffer, 0, sizeof(displayFrame.buffer));
   return true;
}

bool screenSetPosition(uint8_t inX, uint8_t inY)
{
    x = inX;
    y = inY;
    return true;
}

bool screenSend(void)
{
    return displaySendFrame(&displayFrame);
}
