/*
 * File:   lcd.c
 * Author: Kosimin
 *
 * Created on 20 July, 2026, 2:39 PM
 */


#include "lcd.h"

void LCD_enable()
{
    EN = 1;
    __delay_us(20);
    EN = 0;
    __delay_us(100);
}

void send_half(unsigned char half)
{
    D4 = (half>>0)&1;
    D5 = (half>>1)&1;
    D6 = (half>>2)&1;
    D7 = (half>>3)&1;
}

void send_data(unsigned char chr)
{
    send_half(chr>>4);
    LCD_enable();
    send_half(chr & 0b00001111);
    LCD_enable();
}


void LCD_commands(unsigned char cmd)
{
    RS = 0;
    send_data(cmd);
    __delay_ms(2);
}

void LCD_data(unsigned char data)
{
    RS = 1;
    send_data(data);
    __delay_ms(2);
}

void LCD_init()
{
    __delay_ms(20);
    RS = 0;
    send_half(0x02);
    LCD_enable();
    __delay_ms(5);

    LCD_commands(0x28);
    LCD_commands(0x0C);
    LCD_commands(0x06);
    LCD_commands(0x01);
}

void LCD_string(char *str)
{
    while(*str)
    {
       LCD_data(*str);
       str++;
       __delay_ms(5);
    }
}

void LCD_rowCols(unsigned char row, unsigned char col)
{
    unsigned char address;
    if (row == 1)
    {
        address = 0x00 + 0b10000000 + (col-1);
    }
    else
    {
        address = 0x40 + 0b10000000 + (col-1);
    }
    LCD_commands(address);
}