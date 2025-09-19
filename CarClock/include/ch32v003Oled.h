#ifndef CH32V003OLED_H
#define CH32V003OLED_H
#include "BoardInit.h"
#define SCREEN_ADDRESS 0x78
#define COMMAND_MODE 0x00
#define DATA_MODE 0X40
#define CHARACTER_NUMBER 11
extern const uint8_t initSequence[];
extern const uint8_t Font[CHARACTER_NUMBER][24][4];
void StartOled();
void ResetCursor();
void OledClear();
void SendPadding();//to remove 
void OledFill(uint8_t b);
void OledPrintChar(int index);
void OledInit();
#endif