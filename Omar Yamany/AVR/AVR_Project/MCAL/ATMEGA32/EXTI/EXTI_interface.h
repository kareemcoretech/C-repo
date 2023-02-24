/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : EXTI_interface.h                                	     */
/* Date          : Feb 18, 2023                                          */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#ifndef MCAL_ATMEGA32_EXTI_EXTI_INTERFACE_H_
#define MCAL_ATMEGA32_EXTI_EXTI_INTERFACE_H_

/********************* FILE INCLUDES *********************/

#include "EXTI_config.h"
#include "EXTI_private.h"
#include "../../../Services/BIT_MATH/BIT_MATH.h"
#include "../../../Services/STD_TYPES/STD_TYPES.h"

/********************* SELECTED CONFIGURATIONS *********************/
#define EXTI_INTERRUPT EXTI0_PIN
#define EXTI_ACTIVATION_SENSE EXTI0_LOW_ACTIVATION
#define ActivationSense LOW_ACTIVATION //LOW_ACTIVATION

/********************* FUNCTION PROTOTYPES *********************/

// This function shall be responsible for initializing external interrupts
void EXTI_vInit(void);

// This function shall be responsible for disabling external interrupts
void EXTI_vDisableInterrupt(void);

// This function shall be responsible for enabling any interrupt pin with any activation sensing
void EXTI_vEnablePin(u8 Copy_u8PinName);

// This function shall be responsible for enabling any interrupt pin
void EXTI_vDisablePin(u8 Copy_u8PinName);

#endif /* MCAL_ATMEGA32_EXTI_EXTI_INTERFACE_H_ */
