/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : EXTI_program.c                                  	     */
/* Date          : Feb 18, 2023                                          */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#include "EXTI_interface.h"

// This function shall be responsible for initializing external interrupts
void EXTI_vInit(void){
/********************* SELECTING ACTIVATION SENSOR FOR EXTI0 *********************/
#if EXTI_INTERRUPT == EXTI0_PIN
#if EXTI_ACTIVATION_SENSE == EXTI0_LOW_ACTIVATION
	MCUCR_REG &= EXTI0_RESET_ACTIVATION;
	MCUCR_REG |= EXTI0_LOW_ACTIVATION;
	SET_BIT(GICR_REG, EXTI0_PIN);
#elif EXTI_ACTIVATION_SENSE == EXTI0_LOGAICAL_CHANGE_ACTIVATION
	MCUCR_REG &= EXTI0_RESET_ACTIVATION;
	MCUCR_REG |= EXTI0_LOGAICAL_CHANGE_ACTIVATION;
#elif EXTI_ACTIVATION_SENSE == EXTI0_FALLING_ACTIVATION
	MCUCR_REG &= EXTI0_RESET_ACTIVATION;
	MCUCR_REG |= EXTI0_FALLING_ACTIVATION;
#elif EXTI_ACTIVATION_SENSE == EXTI0_RISING_ACTIVATION
	MCUCR_REG &= EXTI0_RESET_ACTIVATION;
	MCUCR_REG |= EXTI0_RISING_ACTIVATION;
#endif
/********************* SELECTING ACTIVATION SENSOR FOR EXTI1 *********************/
#elif EXTI_INTERRUPT == EXTI1_PIN
#if EXTI_ACTIVATION_SENSE == EXTI1_LOW_ACTIVATION
	MCUCR_REG &= EXTI1_RESET_ACTIVATION;
	MCUCR_REG |= EXTI1_LOW_ACTIVATION;
#elif EXTI_ACTIVATION_SENSE == EXTI1_LOGAICAL_CHANGE_ACTIVATION
	MCUCR_REG &= EXTI1_RESET_ACTIVATION;
	MCUCR_REG |= EXTI1_LOGAICAL_CHANGE_ACTIVATION;
#elif EXTI_ACTIVATION_SENSE == EXTI1_FALLING_ACTIVATION
	MCUCR_REG &= EXTI1_RESET_ACTIVATION;
	MCUCR_REG |= EXTI1_FALLING_ACTIVATION;
#elif EXTI_ACTIVATION_SENSE == EXTI1_RISING_ACTIVATION
	MCUCR_REG &= EXTI1_RESET_ACTIVATION;
	MCUCR_REG |= EXTI1_RISING_ACTIVATION;
#endif
/********************* SELECTING ACTIVATION SENSOR FOR EXTI2 *********************/
#elif EXTI_INTERRUPT == EXTI2_PIN
#if EXTI_ACTIVATION_SENSE == EXTI2_FALLING_ACTIVATION
	MCUCSR_REG &= EXTI2_RESET_ACTIVATION;
#elif EXTI_ACTIVATION_SENSE == EXTI2_RISING_ACTIVATION
	MCUCSR_REG |= EXTI2_RISING_ACTIVATION;
#endif
#endif
}

// This function shall be responsible for disabling external interrupts
void EXTI_vDisableInterrupt(void){

}



// This function shall be responsible for enabling any interrupt pin with any activation sensing
void EXTI_vEnablePin(u8 Copy_u8PinName){
	switch(Copy_u8PinName)
	{
	case INT0_PIN:
#if ActivationSense == LOW_ACTIVATION
		CLR_BIT(MCUCR_REG, 0); CLR_BIT(MCUCR_REG, 1); SET_BIT(GICR_REG, EXTI0_PIN);
#elif ActivationSense == LOGICAL_CHANGE_ACTIVATION
		SET_BIT(MCUCR_REG, 0); CLR_BIT(MCUCR_REG, 1); SET_BIT(GICR_REG, EXTI0_PIN);
#elif ActivationSense == FALLING_ACTIVATION
		CLR_BIT(MCUCR_REG, 0); SET_BIT(MCUCR_REG, 1); SET_BIT(GICR_REG, EXTI0_PIN);
#elif ActivationSense == RISING_ACTIVATION
		SET_BIT(MCUCR_REG, 0); SET_BIT(MCUCR_REG, 1); SET_BIT(GICR_REG, EXTI0_PIN);
#endif
		break;

	case INT1_PIN:
#if ActivationSense == LOW_ACTIVATION
		CLR_BIT(MCUCR_REG, 2); CLR_BIT(MCUCR_REG, 3); SET_BIT(GICR_REG, EXTI1_PIN);
#elif ActivationSense == LOGICAL_CHANGE_ACTIVATION
		SET_BIT(MCUCR_REG, 2); CLR_BIT(MCUCR_REG, 3); SET_BIT(GICR_REG, EXTI1_PIN);
#elif ActivationSense == FALLING_ACTIVATION
		CLR_BIT(MCUCR_REG, 2); SET_BIT(MCUCR_REG, 3); SET_BIT(GICR_REG, EXTI1_PIN);
#elif ActivationSense == RISING_ACTIVATION
		SET_BIT(MCUCR_REG, 2); SET_BIT(MCUCR_REG, 3); SET_BIT(GICR_REG, EXTI1_PIN);
#endif
		break;

	case INT2_PIN:
#if ActivationSense == FALLING_ACTIVATION
		CLR_BIT(MCUCSR_REG, 6); SET_BIT(GICR_REG, EXTI2_PIN);
#elif ActivationSense == RISING_ACTIVATION
		SET_BIT(MCUCSR_REG, 6); SET_BIT(GICR_REG,EXTI2_PIN);
#endif
		break;
	}
}

// This function shall be responsible for enabling any interrupt pin
void EXTI_vDisablePin(u8 Copy_u8PinName){
	switch(Copy_u8PinName)
	{
	case INT0_PIN: CLR_BIT(GICR_REG, EXTI0_PIN); break;
	case INT1_PIN: CLR_BIT(GICR_REG, EXTI1_PIN); break;
	case INT2_PIN: CLR_BIT(GICR_REG, EXTI2_PIN); break;
	}
}
