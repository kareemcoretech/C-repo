/*
 * EXTI_Config.h
 *
 *  Created on: Feb 18, 2023
 *      Author: moham
 */

#ifndef MCAL_EXTI_EXTI_CONFIG_H_
#define MCAL_EXTI_EXTI_CONFIG_H_

/*********** ACTIVATION SENSING ***********/

#define EXTI0_LOW_ACTIVATION 				0b00000000
#define EXTI0_LOGICAL_CHANGE_ACTIVATION 	0b00000001
#define EXTI0_FALLING_ACTIVATION 			0b00000010
#define EXTI0_RISING_ACTIVATION 			0b00000011

#define EXTI1_LOW_ACTIVATION 				0b00000000
#define EXTI1_LOGICAL_CHANGE_ACTIVATION 	0b00000100
#define EXTI1_FALLING_ACTIVATION 			0b00001000
#define EXTI1_RISING_ACTIVATION 			0b00001100

#define EXTI2_FALLING_ACTIVATION 			0b00000000
#define EXTI2_RISING_ACTIVATION 			0b01000000

/*********** EXTI PINS ***********/

#define EXTI0_PIN 	6
#define EXTI1_PIN 	7
#define EXTI2_PIN 	5

#endif /* MCAL_EXTI_EXTI_CONFIG_H_ */
