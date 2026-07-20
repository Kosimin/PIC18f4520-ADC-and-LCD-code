/*
 * File:   main.c
 * Author: Kosimin
 *
* Created on 19 July, 2026, 9:59 PM
 */


#include <xc.h>
#include <stdio.h>
#include "config.h"
#include "lcd.h"
#include "adc.h"

void main()
{
    OSCCONbits.IRCF = 0b111;
    TRISD = 0x00;
    LATD = 0x00;
    ADC_init();
    LCD_init();
    
    unsigned int value;
    unsigned int volt;
    char text[16];
    while(1)
    {
        
        value = ADC_read();
        volt = ((unsigned long)value*500)/1023;
        sprintf(text, "%d.%02d", volt/100,volt%100);
        LCD_rowCols(1,4);
        LCD_string(text);
        __delay_ms(200);
    }
}