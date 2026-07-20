/*
 * File:   adc.c
 * Author: Kosimin
 *
 * Created on 20 July, 2026, 2:38 PM
 */

#include "adc.h"

void ADC_init()
{
    ADCON0bits.CHS = 0b0000;
    ADCON0bits.ADON = 1;
    ADCON1bits.VCFG0 = 0;
    ADCON1bits.VCFG1 = 0;
    ADCON1bits.PCFG = 0b1110;
    ADCON2bits.ADFM = 1;
    ADCON2bits.ACQT = 0b101;
    ADCON2bits.ADCS = 0b010;
}

unsigned int ADC_read()
{
    ADCON0bits.GODONE = 1;
    while(ADCON0bits.GODONE == 1);
    return ((ADRESH << 8) | ADRESL);
}