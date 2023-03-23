/*
 * DIO_Prog.c
 *
 *  Created on: Jan 28, 2023
 *      Author: Mohamed ahmed
 */

#include "../../Services/BIT_OP.h"
#include "./DIO_Interface.h"

#define ERROR 0xE;

// Set direction
void DIO_vSetPortDirection(u8 Copy_u8Port, u8 Copy_u8Direction){
	if((PORTA <= Copy_u8Port) && (Copy_u8Port <= PORTD)){
		switch(Copy_u8Port){
			case PORTA:
				DDRA_REG = Copy_u8Direction;
				break;
			case PORTB:
				DDRB_REG = Copy_u8Direction;
				break;
			case PORTC:
				DDRC_REG = Copy_u8Direction;
				break;
			case PORTD:
				DDRD_REG = Copy_u8Direction;
				break;
		}
	}else{
		// ERROR
	}
}

void DIO_vSetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction){
	if(((PORTA <= Copy_u8Port) && (Copy_u8Port <= PORTD)) && ((PIN0 <= Copy_u8Pin) && (Copy_u8Pin <= PIN7))){
		if(Copy_u8Direction == OUTPUT){
			switch(Copy_u8Port){
				case PORTA:
					SET_BIT(DDRA_REG, Copy_u8Pin);
					break;
				case PORTB:
					SET_BIT(DDRB_REG, Copy_u8Pin);
					break;
				case PORTC:
					SET_BIT(DDRC_REG, Copy_u8Pin);
					break;
				case PORTD:
					SET_BIT(DDRD_REG, Copy_u8Pin);
					break;
			}
		}else if(Copy_u8Direction == INPUT){
			switch(Copy_u8Port){
				case PORTA:
					CLR_BIT(DDRA_REG, Copy_u8Pin);
					break;
				case PORTB:
					CLR_BIT(DDRB_REG, Copy_u8Pin);
					break;
				case PORTC:
					CLR_BIT(DDRC_REG, Copy_u8Pin);
					break;
				case PORTD:
					CLR_BIT(DDRD_REG, Copy_u8Pin);
					break;
			}
		}
	}
}

// Set state
void DIO_vSetPortState(u8 Copy_u8Port, u8 Copy_u8State){
	if((PORTA <= Copy_u8Port) && (Copy_u8Port <= PORTD)){
		switch(Copy_u8Port){
			case PORTA:
				PORTA_REG = Copy_u8State;
				break;
			case PORTB:
				PORTB_REG = Copy_u8State;
				break;
			case PORTC:
				PORTC_REG = Copy_u8State;
				break;
			case PORTD:
				PORTD_REG = Copy_u8State;
				break;
		}
	}else{
		// ERROR
	}
}

void DIO_vSetPinState(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8State){
	if(((PORTA <= Copy_u8Port) && (Copy_u8Port <= PORTD)) && ((PIN0 <= Copy_u8Pin) && (Copy_u8Pin <= PIN7))){
		if(Copy_u8State == HIGH){
			switch(Copy_u8Port){
				case PORTA:
					SET_BIT(PORTA_REG, Copy_u8Pin);
					break;
				case PORTB:
					SET_BIT(PORTB_REG, Copy_u8Pin);
					break;
				case PORTC:
					SET_BIT(PORTC_REG, Copy_u8Pin);
					break;
				case PORTD:
					SET_BIT(PORTD_REG, Copy_u8Pin);
					break;
			}
		}else if(Copy_u8State == LOW){
			switch(Copy_u8Port){
				case PORTA:
					CLR_BIT(PORTA_REG, Copy_u8Pin);
					break;
				case PORTB:
					CLR_BIT(PORTB_REG, Copy_u8Pin);
					break;
				case PORTC:
					CLR_BIT(PORTC_REG, Copy_u8Pin);
					break;
				case PORTD:
					CLR_BIT(PORTD_REG, Copy_u8Pin);
					break;
			}
		}
	}else{
		// ERROR
	}
}

// Get state
u8 DIO_u8GetPinState(u8 Copy_u8Port, u8 Copy_u8Pin){
	u8 Local_u8Pin;
	if(((PORTA <= Copy_u8Port) && (Copy_u8Port <= PORTD)) && ((PIN0 <= Copy_u8Pin) && (Copy_u8Pin <= PIN7))){
		switch(Copy_u8Port){
			case PORTA:
				Local_u8Pin = GET_BIT(PINA_REG, Copy_u8Pin);
				break;
			case PORTB:
				Local_u8Pin = GET_BIT(PINB_REG, Copy_u8Pin);
				break;
			case PORTC:
				Local_u8Pin = GET_BIT(PINC_REG, Copy_u8Pin);
				break;
			case PORTD:
				Local_u8Pin = GET_BIT(PIND_REG, Copy_u8Pin);
				break;
		}

	}else{
		// Error
		Local_u8Pin = ERROR;
	}

	return Local_u8Pin;
}
