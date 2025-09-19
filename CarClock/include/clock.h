#ifndef CLOCK_H
#define CLOCK_H
#include "ch32v003Oled.h"
#include "PCF8563.h"
#define HOUR_PIN GPIO_Pin_6
#define MINUTE_PIN GPIO_Pin_5
volatile extern uint8_t countSeconds;
volatile extern uint8_t interruptFlagHour;
volatile extern uint8_t interruptFlagMin;
void InitClock();
void PrintTime(uint8_t hour_tens, uint8_t hour_unit, uint8_t min_tens, uint8_t min_unit);
#endif