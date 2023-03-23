/*
 * ADC_Config.h
 *
 *  Created on: Feb 25, 2023
 *      Author: moham
 */

#ifndef MCAL_ADC_ADC_CONFIG_H_
#define MCAL_ADC_ADC_CONFIG_H_

#include "../DIO/DIO_Interface.h"

/* 1- Voltage Referance
 * 2- ADC Pin / Port
 * 3- Synch/Asynch
 * 4- Prescaler
 * */

/**************************** Voltage Referance ****************************/

#define ADC_AREF_VOLT 		0
#define ADC_AVCC_VOLT		1
#define ADC_INTERNAL_VOLT 	2

/**************************** ADC Port / Pin ****************************/

#define ADC_PIN0 		PIN0
#define ADC_PIN1		PIN1
#define ADC_PIN2 		PIN2
#define ADC_PIN3		PIN3
#define ADC_PIN4 		PIN4
#define ADC_PIN5		PIN5
#define ADC_PIN6 		PIN6
#define ADC_PIN7		PIN7

#define ADC_PORT 		PORTA

/**************************** Prescaler ****************************/

#define ADC_PRE2		0
#define ADC_PRE4		1
#define ADC_PRE8		2
#define ADC_PRE16		3
#define ADC_PRE32		4
#define ADC_PRE64		5
#define ADC_PRE128		6


/**************************** INTERRUPT Enable / Disable ****************************/

#define ENABLED 		1
#define DISABLED		0

#endif /* MCAL_ADC_ADC_CONFIG_H_ */
