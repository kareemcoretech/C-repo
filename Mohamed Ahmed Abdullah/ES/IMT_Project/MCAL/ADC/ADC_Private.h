/*
 * ADC_Private.h
 *
 *  Created on: Feb 25, 2023
 *      Author: moham
 */

#ifndef MCAL_ADC_ADC_PRIVATE_H_
#define MCAL_ADC_ADC_PRIVATE_H_

#include "../../Services/STD_TYPES.h"

/* 1- Registers
 * 2- Channels Value  */

/**************************** Registers ****************************/

#define ADMUX_REG 		*((volatile u8*) 	0x27)
#define ADCSRA_REG 		*((volatile u8*)	0x26)
#define ADC_DATA_REG_L 	*((volatile u8*)	0x24)
#define ADC_DATA_REG_H 	*((volatile u8*)	0x25)


/**************************** Channels Value ****************************/

#define ADC_CH0 			0b00000000
#define ADC_CH1 			0b00000001
#define ADC_CH2 			0b00000010
#define ADC_CH3 			0b00000011
#define ADC_CH4 			0b00000100
#define ADC_CH5 			0b00000101
#define ADC_CH6 			0b00000110
#define ADC_CH7				0b00000111

/**************************** Prescaler ****************************/

#define ADC_DIV2			0b00000000
#define ADC_DIV4			0b00000010
#define ADC_DIV8			0b00000011
#define ADC_DIV16			0b00000100
#define ADC_DIV32			0b00000101
#define ADC_DIV64			0b00000110
#define ADC_DIV128			0b00000111

#endif /* MCAL_ADC_ADC_PRIVATE_H_ */
