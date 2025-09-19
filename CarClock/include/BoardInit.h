#ifndef BOARDINIT_H
#define BOARDINIT_H
#include <ch32v00x.h>
#include <ch32v00x_misc.h>
#include <ch32v00x_gpio.h>
#include "ch32v00x_it.h"
void init();
void initPin(uint8_t pinNumber, char bank, uint8_t mode, uint8_t speed);
void IIC_Init(u32 speed, u16 address);
#endif 