/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : EXTI_config.h                                   	     */
/* Date          : Feb 18, 2023                                          */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#ifndef MCAL_ATMEGA32_EXTI_EXTI_CONFIG_H_
#define MCAL_ATMEGA32_EXTI_EXTI_CONFIG_H_

/********************* ACTIVATION SENSING *********************/

//SENSE CONTROL VALUES FOR INT0

#define EXTI0_LOW_ACTIVATION 				0x00 //0b00000000
#define EXTI0_LOGICAL_CHANGE_ACTIVATION	0x01 //0b00000001
#define EXTI0_FALLING_ACTIVATION			0x02 //0b00000010
#define EXTI0_RISING_ACTIVATION				0x03 //0b00000011
#define EXTI0_RESET_ACTIVATION				0xFC //0b11111100

//SENSE CONTROL VALUES FOR INT1

#define EXTI1_LOW_ACTIVATION 				0x00 //0b00000000
#define EXTI1_LOGICAL_CHANGE_ACTIVATION	0x04 //0b00000100
#define EXTI1_FALLING_ACTIVATION			0x08 //0b00001000
#define EXTI1_RISING_ACTIVATION				0x0C //0b00001100
#define EXTI1_RESET_ACTIVATION				0xF3 //0b11110011

//SENSE CONTROL VALUES FOR INT2

#define EXTI2_FALLING_ACTIVATION			0x00 //0b00000000
#define EXTI2_RISING_ACTIVATION				0x40 //0b01000000
#define EXTI2_RESET_ACTIVATION				0xBF //0b10111111

/********************* EXTI PINS *********************/

#define EXTI0_PIN 6
#define EXTI1_PIN 7
#define EXTI2_PIN 5

#endif /* MCAL_ATMEGA32_EXTI_EXTI_CONFIG_H_ */
