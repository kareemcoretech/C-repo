/*
 * EXTI_Interface.h
 *
 *  Created on: Feb 18, 2023
 *      Author: moham
 */

#ifndef MCAL_EXTI_EXTI_INTERFACE_H_
#define MCAL_EXTI_EXTI_INTERFACE_H_

#include "EXTI_Config.h"
#include "EXTI_Private.h"

/************* SELECTED CONFIGS *************/
#define EXTI_INTERRUPT 			EXTI0_PIN
#define EXTI_ACTIVATION_SENSE 	EXTI0_LOW_ACTIVATION

/************* FUNCTIONS PROTOTYPE *************/

// Function shall be responsible for initializing external interrupt
void EXTI_vInit(void);

// Function shall be responsible for disabling external interrupt
void EXT_vDisableInterrupt(void);

#endif /* MCAL_EXTI_EXTI_INTERFACE_H_ */
