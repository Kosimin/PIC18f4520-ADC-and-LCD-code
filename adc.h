/* 
 * File:   adc.h
 * Author: Kosimin
 *
 * Created on 20 July, 2026, 2:30 PM
 */

#ifndef ADC_H
#define	ADC_H
#include <xc.h>
#ifdef	__cplusplus
extern "C" {
#endif

void ADC_init(void);
unsigned int ADC_read(void);


#ifdef	__cplusplus
}
#endif

#endif	/* ADC_H */

