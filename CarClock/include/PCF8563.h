#ifndef PCF8563_H
#define PCF8563_H
#include "BoardInit.h"
#define WRITE_ADDRESS 0xA2
#define READ_ADDRESS 0xA3
void Write(uint8_t reg, unsigned char value);
void QueryTime(unsigned char * min, unsigned char * hour);
void WriteTime(unsigned char * min, unsigned char * hour);
unsigned char Read(uint8_t reg);
#endif