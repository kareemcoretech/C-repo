/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : EXTI_private.h                                  	     */
/* Date          : Feb 18, 2023                                          */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#ifndef MCAL_ATMEGA32_EXTI_EXTI_PRIVATE_H_
#define MCAL_ATMEGA32_EXTI_EXTI_PRIVATE_H_

/********************* enum for activation sense control *********************/
enum sense_control{
	LOW_ACTIVATION = 11,
	LOGICAL_CHANGE_ACTIVATION,
	FALLING_ACTIVATION,
	RISING_ACTIVATION
};

/********************* SETTING ADDRESSES FOR USED REGISTERS *********************/
#define MCUCR_REG 		*((volatile u8*) 0x55)
#define MCUCSR_REG 		*((volatile u8*) 0x54)
#define GICR_REG 		*((volatile u8*) 0x5B)
#define GIFR_REG 		*((volatile u8*) 0x5A)

/********************* enum for interrupt pins *********************/
enum pins{
	INT0_PIN = 0,
	INT1_PIN,
	INT2_PIN
};

#define LOW_ACTIVATION 0
#define LOGICAL_CHANGE_ACTIVATION 1
#define FALLING_ACTIVATION 2
#define RISING_ACTIVATION 3

///********************* enum for activation sense control *********************/
//enum sense_control{
//	LOW_ACTIVATION = 11,
//	LOGICAL_CHANGE_ACTIVATION,
//	FALLING_ACTIVATION,
//	RISING_ACTIVATION
//};

#endif /* MCAL_ATMEGA32_EXTI_EXTI_PRIVATE_H_ */
