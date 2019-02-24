#include "stdint.h"
#include "string.h"

#include "frameHall.h"
#include "displaySsd1306HAL.h"

#include "symbolsArial11pts.h"
#include "symbolsArial8pts.h"
#include "symbolsArial16pts.h"
#include "symbolsSegoePrint14pts.h"

/*fontDescriptor fields */
#define WIDTH_POS   0
#define HEIGHT_POS  1
#define ADDRESS_POS 2

/*fontInfo fields */
#define FIRST_SYMBOL_POS      1
#define LAST_SYMBOL_POS       2
#define FONT_DESCRIPTIONS_POS 4
#define FONT_BITMAP_POS       5

static const uint32_t *fontInfoList[] =
{
    [ARIAL_8PTS]  = (uint32_t*)arial_8ptFontInfo,
    [ARIAL_11PTS] = (uint32_t*)arial_11ptFontInfo,
    [ARIAL_16PTS] = (uint32_t*)arial_16ptFontInfo,
    [SEGOEPRINT_14PTS] = (uint32_t*)segoePrint_14ptFontInfo,
};

static const uint8_t* getSymbol(const uint8_t *symbol,
                                          uint8_t *height,
                                          uint8_t *width,
                                          SymbolType symbolType)
{
    const uint32_t *fontInfo            = fontInfoList[symbolType];
    const uint32_t (*fontDescriptor)[3] = (uint32_t(*)[3])fontInfo[FONT_DESCRIPTIONS_POS];
    const uint8_t *fontBitmap           = (uint8_t*)fontInfo[FONT_BITMAP_POS];

    if((*symbol < fontInfo[FIRST_SYMBOL_POS]) || (*symbol > fontInfo[LAST_SYMBOL_POS])) {
        return NULL;  // symbol out of range
    }

    uint8_t pos = *symbol - fontInfo[FIRST_SYMBOL_POS];

    *height = fontDescriptor[pos][HEIGHT_POS];
    *width  = fontDescriptor[pos][WIDTH_POS];
    return fontBitmap + fontDescriptor[pos][ADDRESS_POS];
}

static bool addImage(FrameHandl inFrame, const uint8_t *image, uint8_t heigh, uint8_t width)
{
    uint8_t  (*tImage)[width] = (uint8_t(*)[width])image;
    uint8_t  (*screenBuff)[inFrame->width] = (uint8_t(*)[inFrame->width])inFrame->buff;
    uint8_t yByte = inFrame->y >> 3;
    uint8_t yBit  = inFrame->y - yByte * 8;
    uint8_t k;
    uint8_t i = 0;
    uint8_t yImag = 0;
    uint8_t shiftImg = 0;

    while(yImag < heigh) {
        yImag += 8 - ( shiftImg = (yImag < heigh) ? (yBit) : (0));
        for(k = 0; k < width; k++) {
            screenBuff[yByte][inFrame->x + k] |= (tImage[i][k] << shiftImg);
        }
        i = yImag >> 3;
        yImag += 8 - ( shiftImg = (yImag < heigh) ? (8 - yBit) : (0));
        if(shiftImg == 0) {
            break;
        }
        yByte++;
        for(k = 0; k < width; k++) {
            screenBuff[yByte][inFrame->x + k] |= (tImage[i][k] >> shiftImg);
        }
        i = yImag >> 3;
    }
    return true;
}

void frameInit(FrameHandl inFrame, uint8_t *frameBuff, uint16_t heigh, uint16_t width)
{
    inFrame->buff  = frameBuff;
    inFrame->heigh = heigh;
    inFrame->width = width;
}

bool frameAddString(FrameHandl inFrame, const uint8_t *str, SymbolType symbolType)
{
    #define SPACE_BITS  2
    const uint8_t *symbol;
    uint8_t symbolHeigh;
    uint8_t symbolWidth;
    while(*str) {
        symbol = getSymbol(str, &symbolHeigh, &symbolWidth, symbolType);
        if((*str == ' ') || (symbol == NULL)) {
            inFrame->x += SPACE_BITS;
            str++;
            continue;
        }

        if((inFrame->x + symbolWidth) >= inFrame->width) {
           if((inFrame->y + symbolHeigh) >= inFrame->heigh) {
               return false;
           }
           inFrame->y += symbolHeigh;
           inFrame->x = 0;
        }

        addImage(inFrame, symbol, symbolHeigh, symbolWidth);
        inFrame->x += symbolWidth + SPACE_BITS;
        str++;
    }
    return true;
}

bool frameAddImage(FrameHandl inFrame, const uint8_t *image, uint8_t imageHeigh, uint8_t imageWidth)
{
    return addImage(inFrame, image, imageHeigh, imageWidth);
}

bool frameClear(FrameHandl inFrame)
{
   memset(inFrame->buff, 0, inFrame->heigh * inFrame->width /8);
   return true;
}

bool frameSetPosition(FrameHandl inFrame, uint8_t inX, uint8_t inY)
{
    inFrame->x = inX;
    inFrame->y = inY;
    return true;
}
