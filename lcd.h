/* 
 * File:   lcd.h
 * Author: Kosimin
 *
 * Created on 20 July, 2026, 2:40 PM
 */

#ifndef LCD_H
#define	LCD_H
#include <xc.h>
#ifdef	__cplusplus
extern "C" {
#endif
#define RS LATDbits.LATD0
#define EN LATDbits.LATD1
#define D4 LATDbits.LATD4
#define D5 LATDbits.LATD5
#define D6 LATDbits.LATD6
#define D7 LATDbits.LATD7
void LCD_enable(void);
void send_half(unsigned char half);
void send_data(unsigned char chr);
void LCD_commands(unsigned char cmd);
void LCD_data(unsigned char data);
void LCD_init(void);
void LCD_string(char *str);
void LCD_rowCols(unsigned char row, unsigned char col);
#define _XTAL_FREQ 8000000
#ifdef	__cplusplus
}
#endif

#endif	/* LCD_H */
