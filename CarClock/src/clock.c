#include "clock.h"
#include <ch32v00x_exti.h>
volatile uint8_t countSeconds = 0;
volatile uint8_t interruptFlagHour = 0;
volatile uint8_t interruptFlagMin = 0;
void PrintTime(uint8_t hour_tens, uint8_t hour_unit, uint8_t min_tens, uint8_t min_unit){
    ResetCursor();
    OledPrintChar(hour_tens);
    OledPrintChar(hour_unit);
    OledPrintChar(10);
    OledPrintChar(min_tens);
    OledPrintChar(min_unit);
}
void InitClock(){
    OledInit();
    unsigned char min = 0;
    unsigned char hour = 0;
    Write(0x00, 0b00000000);
    Write(0x0D, 0b10000011);
    initPin(HOUR_PIN, 'C', GPIO_Mode_IPU, GPIO_Speed_50MHz);
    initPin(MINUTE_PIN, 'C', GPIO_Mode_IPU, GPIO_Speed_50MHz);
    uint8_t currentSeconds = Read(0x02); 
    countSeconds = (currentSeconds >> 4) | (currentSeconds & 0x0F);
    QueryTime(&min, &hour);
    PrintTime(hour >> 4 & 0x03, hour & 0x0F, min >> 4, min & 0x0F);
    while(1){        
        if(GPIO_ReadInputDataBit(GPIOC, HOUR_PIN) == 0){
            interruptFlagHour = 1;
        }
        if(GPIO_ReadInputDataBit(GPIOC, MINUTE_PIN) == 0){
            interruptFlagMin = 1;
        }
        if(interruptFlagHour == 1){
            interruptFlagHour = 0;
            QueryTime(&min, &hour);
            uint8_t htens = hour >> 4;
            uint8_t hunit = hour & 0x0F;
            if(htens == 2 && hunit == 3){
                htens = 0;
                hunit = 0;
            }
            else if(hunit == 9){
                hunit = 0;
                if(htens < 2)
                    htens++;
            }
            else
                hunit++;
            hour = (htens << 4) | hunit;
            //incrementa ora
            WriteTime(&min, &hour);
            countSeconds = 0;
            PrintTime(hour >> 4 & 0x03, hour & 0x0F, min >> 4, min & 0x0F);
            Delay_Ms(700);
        }
        if(interruptFlagMin == 1){
            interruptFlagMin = 0;
            QueryTime(&min, &hour);
            uint8_t mtens = min >> 4;
            uint8_t munit = min & 0x0F;
            if(munit == 9){
                munit = 0;
                if(mtens == 5)
                    mtens = 0;
                else
                    mtens++;
            }
            else 
                munit++;
            min = (mtens << 4) | munit;
            WriteTime(&min, &hour);
            countSeconds = 0;
            PrintTime(hour >> 4 & 0x03, hour & 0x0F, min >> 4, min & 0x0F);
            Delay_Ms(700);
        }
        if(countSeconds == 60){
            countSeconds = 0;
            QueryTime(&min, &hour);
            PrintTime(hour >> 4 & 0x03, hour & 0x0F, min >> 4, min & 0x0F);
        }
    }
}
