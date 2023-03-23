/*
 * ADC_Interface.h
 *
 *  Created on: Feb 25, 2023
 *      Author: moham
 */

#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_

/**************************** INCLUDES ****************************/

#include "ADC_Private.h"
#include "ADC_Config.h"

#include "../../Services/STD_TYPES.h"
#include "../../Services/BIT_OP.h"
#include "../../Services/MCU_Private.h"

/**************************** CONFIG Parameters ****************************/

#define ADC_VOLTAGE				ADC_INTERNAL_VOLT
#define ADC_INIT_CH				ADC_PIN0
#define ADC_PRESCALER			ADC_PRE64

#define ADC_INTERRUPT_STATE 	DISABLED

/**************************** Sync / Async ****************************/

/**************************** Functions Prototype ****************************/

// Function to initialize ADC
void ADC_vInit(void);

// Function to make ADC start conversion process
void ADC_vStartConversion(u8 Copy_u8AdcPin);

// Function to set status of interrupt
void ADC_vInterruptState(u8 Copy_u8InterruptState);

// Function to read digital data after conversion
u16 ADC_u16ReadConvertedData(u8 Copy_u8AdcPin);

#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
