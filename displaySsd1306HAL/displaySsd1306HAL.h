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

typedef bool (*SendBuffCB)(uint8_t displayAddres, uint8_t data[], uint16_t dataSize);

void displayInit(SendBuffCB sendBuffCB);
bool displaySendFrame(DisplayFrame *frame);

#endif
