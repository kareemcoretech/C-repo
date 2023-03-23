/*
 * ADC_Prog.c
 *
 *  Created on: Feb 25, 2023
 *      Author: moham
 */

#include "ADC_Interface.h"

#include "../../Services/BIT_OP.h"
#include "../../Services/STD_TYPES.h"

// Function to initialize ADC
void ADC_vInit(void){

	// Set Voltage Referance
	#if ADC_VOLTAGE == ADC_INTERNAL_VOLT
		SET_BIT(ADMUX_REG,PIN7);
		SET_BIT(ADMUX_REG,PIN6);
	#elif ADC_VOLTAGE == ADC_AVCC_VOLT
		CLR_BI(ADMUX_REG,PIN7);
		SET_BIT(ADMUX_REG,PIN6);
	#elif ADC_VOLTAGE == ADC_AREF_VOLT
		CLR_BI(ADMUX_REG,PIN7);
		CLR_BIT(ADMUX_REG,PIN6);
	#endif

	// Set Channel Initially
	#if ADC_INIT_CH == ADC_PIN0
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH0 & 0x1F);
	#elif ADC_INIT_CH == ADC_PIN1
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH1 & 0x1F);
	#elif ADC_INIT_CH == ADC_PIN2
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH2 & 0x1F);
	#elif ADC_INIT_CH == ADC_PIN3
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH3 & 0x1F);
	#elif ADC_INIT_CH == ADC_PIN4
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH4 & 0x1F);
	#elif ADC_INIT_CH == ADC_PIN5
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH5 & 0x1F);
	#elif ADC_INIT_CH == ADC_PIN6
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH6 & 0x1F);
	#elif ADC_INIT_CH == ADC_PIN7
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH7 & 0x1F);
	#endif

	// SET Right Adjustment
	// NOTE: SET IF Condition
	CLR_BIT(ADMUX_REG, PIN5);

	// Disable Interrupt
	CLR_BIT(ADCSRA_REG, PIN3);

	// Auto Trigger Enable
	//	SET_BIT(ADCSRA_REG, PIN5);

	// Prescaler 64
	#if ADC_PRESCALER == ADC_PRE2
//		ADCSRA_REG = (ADCSRA_REG & 0xF8) | (ADC_DIV2 & 0x07 );
		SET_BIT(ADCSRA_REG,PIN2);
		SET_BIT(ADCSRA_REG,PIN1);
		SET_BIT(ADCSRA_REG,0);
	#elif ADC_PRESCALER == ADC_PRE4
		ADCSRA_REG = (ADCSRA_REG & 0xF8) | (ADC_DIV4 & 0x07 );
	#elif ADC_PRESCALER == ADC_PRE8
		ADCSRA_REG = (ADCSRA_REG & 0xF8) | (ADC_DIV8 & 0x07 );
	#elif ADC_PRESCALER == ADC_PRE16
		ADCSRA_REG = (ADCSRA_REG & 0xF8) | (ADC_DIV16 & 0x07 );
	#elif ADC_PRESCALER == ADC_PRE32
		ADCSRA_REG = (ADCSRA_REG & 0xF8) | (ADC_DIV32 & 0x07 );
	#elif ADC_PRESCALER == ADC_PRE64
		ADCSRA_REG = (ADCSRA_REG & 0xF8) | (ADC_DIV64 & 0x07 );
	#elif ADC_PRESCALER == ADC_PRE128
		ADCSRA_REG = (ADCSRA_REG & 0xF8) | (ADC_DIV128 & 0x07 );
	#endif

	// Enable ADC
	SET_BIT(ADCSRA_REG, PIN7);
}

// Function to make ADC start conversion process
void ADC_vStartConversion(u8 Copy_u8AdcPin){
	// Set the wanted channel
	#if Copy_u8AdcPin == ADC_PIN0
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH0 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN1
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH1 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN2
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH2 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN3
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH3 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN4
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH4 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN5
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH5 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN6
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH6 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN7
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH7 & 0x1F);
	#endif

	// Set bit of ADC Start conversion
	SET_BIT(ADCSRA_REG, PIN6);
}

// Function to set status of interrupt
void ADC_vInterruptState(u8 Copy_u8InterruptState){
	#if ADC_INTERRUPT_STATE == DISABLED
		CLR_BIT(ADCSRA_REG, PIN3);
	#elif ADC_INTERRUPT_STATE == ENABLED
		SET_BIT(ADCSRA_REG, PIN3);
	#endif
}

// Function to read digital data after conversion
u16 ADC_u16ReadConvertedData(u8 Copy_u8AdcPin){
	u16 LOCAL_u16Data = 0;

	// Set the wanted channel
	#if Copy_u8AdcPin == ADC_PIN0
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH0 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN1
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH1 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN2
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH2 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN3
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH3 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN4
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH4 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN5
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH5 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN6
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH6 & 0x1F);
	#elif Copy_u8AdcPin == ADC_PIN7
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH7 & 0x1F);
	#endif

	// Wait Until flag of conversion = 1
	while(GET_BIT(ADCSRA_REG, PIN4) != 1);

	// Read Data Register
	LOCAL_u16Data = ((ADC_DATA_REG_H & 0x03) << 8) | ADC_DATA_REG_L;

	// Set ADC Flag
	SET_BIT(ADCSRA_REG, PIN4);

	return LOCAL_u16Data;
}
