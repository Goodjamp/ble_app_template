#ifndef DISPLAY_SSD1306_HAL_H_
#define DISPLAY_SSD1306_HAL_H_

#include "stdint.h"
#include "stdbool.h"

#define DISPLAY_ADDRESS 0b0111100

#define FRAME_WIDTH_DOT   128
#define FRAME_HEIGHT_DOT  32
#define FRAME_BUFFER_SIZE  (FRAME_WIDTH_DOT * FRAME_HEIGHT_DOT / 8)

#pragma pack(push, 1)
typedef struct{
    uint8_t reserved;
    uint8_t buffer[FRAME_HEIGHT_DOT / 8][FRAME_WIDTH_DOT];
}DisplayFrame;
#pragma pack(pop)

typedef enum {
    SSD1306_Y_POS_0,
    SSD1306_Y_POS_8,
    SSD1306_Y_POS_16,
    SSD1306_Y_POS_32,
    SSD1306_Y_POS_40,
    SSD1306_Y_POS_48,
    SSD1306_Y_POS_56,
    SSD1306_Y_POS_64,
}Ssd1306YPos;

typedef bool (*SendBuffCB)(uint8_t displayAddres, uint8_t data[], uint16_t dataSize);

void displayInit(SendBuffCB sendBuffCB);
bool displaySendFrame(DisplayFrame *frame);
bool displaySetCursorXPos(uint8_t posX);
bool displaySetYArea(Ssd1306YPos startY, Ssd1306YPos stopY);

#endif
