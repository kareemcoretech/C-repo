/*
 * DIO_Prog.c
 *
 *  Created on: Jan 28, 2023
 *      Author: toqae
 */

#include "DIO_Interface.h"


/********************** NEW FUNCTIONS ************************/
void DIO_vSetPinDir(u8 Copy_u8PortName, u8 Copy_u8PinNum, u8 Copy_u8PinDir){

	if(Copy_u8PinDir == OUTPUT)
	{
		switch(Copy_u8PortName)
		{
		case PORTA:
			SET_BIT(DDRA_REG, Copy_u8PinNum);
			break;

		case PORTB:
			SET_BIT(DDRB_REG, Copy_u8PinNum);
			break;

		case PORTC:
			SET_BIT(DDRC_REG, Copy_u8PinNum);
			break;

		case PORTD:
			SET_BIT(DDRD_REG, Copy_u8PinNum);
			break;
		}
	}
	else if(Copy_u8PinDir == INPUT)
	{
		switch(Copy_u8PortName)
		{
		case PORTA:
			CLR_BIT(DDRA_REG, Copy_u8PinNum);
			break;

		case PORTB:
			CLR_BIT(DDRB_REG, Copy_u8PinNum);
			break;

		case PORTC:
			CLR_BIT(DDRC_REG, Copy_u8PinNum);
			break;

		case PORTD:
			CLR_BIT(DDRD_REG, Copy_u8PinNum);
			break;
		}
	}
}


void DIO_vSetGroupDir(u8 Copy_u8PortName, u8 Copy_u8GroupPinsDir){

	if(Copy_u8GroupPinsDir == OUTPUT)
	{
			switch(Copy_u8PortName)
			{
			case PORTA:
				DDRA_REG = 0xff;
				break;

			case PORTB:
				DDRB_REG = 0xff;
				break;

			case PORTC:
				DDRC_REG = 0xff;
				break;

			case PORTD:
				DDRD_REG = 0xff;
				break;
			}
		}
		else if(Copy_u8GroupPinsDir == INPUT)
		{
			switch(Copy_u8PortName)
			{
			case PORTA:
				DDRA_REG = 0x00;
				break;

			case PORTB:
				DDRB_REG = 0x00;
				break;

			case PORTC:
				DDRC_REG = 0x00;
				break;

			case PORTD:
				DDRD_REG = 0x00;
				break;
			}
		}
}


void DIO_vSetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNum, u8 Copy_u8PinVal){

	if(Copy_u8PinVal == HIGH){

		switch(Copy_u8PortName)
		{
		case PORTA:
			SET_BIT(PORTA_REG, Copy_u8PinNum);
			break;

		case PORTB:
			SET_BIT(PORTB_REG, Copy_u8PinNum);
			break;

		case PORTC:
			SET_BIT(PORTC_REG, Copy_u8PinNum);
			break;

		case PORTD:
			SET_BIT(PORTD_REG, Copy_u8PinNum);
			break;
		}
	}
	else if(Copy_u8PinVal == LOW){

		switch(Copy_u8PortName)
		{
		case PORTA:
			CLR_BIT(PORTA_REG, Copy_u8PinNum);
			break;

		case PORTB:
			CLR_BIT(PORTB_REG, Copy_u8PinNum);
			break;

		case PORTC:
			CLR_BIT(PORTC_REG, Copy_u8PinNum);
			break;

		case PORTD:
			CLR_BIT(PORTD_REG, Copy_u8PinNum);
			break;
		}
	}
}

void DIO_vSetGroupValue(u8 Copy_u8PortName, u8 Copy_u8GroupPinsVal){
	switch(Copy_u8PortName)
	{
	case PORTA:
		PORTA_REG &= 0;
	    PORTA_REG = Copy_u8GroupPinsVal;
    	break;

    case PORTB:
    	PORTB_REG &= 0;
    	PORTB_REG = Copy_u8GroupPinsVal;
    	break;

	case PORTC:
    	PORTC_REG &= 0;
    	PORTC_REG = Copy_u8GroupPinsVal;
    	break;

	case PORTD:
    	PORTD_REG &= 0;
    	PORTD_REG = Copy_u8GroupPinsVal;
    	break;
	}
}


u8 DIO_u8ReadPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNum){
	u8 Local_u8PinValue = 0;

	switch(Copy_u8PortName)
	{
	case PORTA:
		Local_u8PinValue = GET_BIT(PINA_REG, Copy_u8PinNum);
		break;

	case PORTB:
		Local_u8PinValue = GET_BIT(PINB_REG, Copy_u8PinNum);
		break;

	case PORTC:
		Local_u8PinValue = GET_BIT(PINC_REG, Copy_u8PinNum);
		break;

	case PORTD:
		Local_u8PinValue = GET_BIT(PIND_REG, Copy_u8PinNum);
		break;
	}
	return Local_u8PinValue;
}


/* DIDNT CHECK IT */
u8 DIO_u8ReadGroupValue(u8 Copy_u8PortName){
	u8 Local_u8GroupPinsValue = 0;

	switch(Copy_u8PortName)
	{
	case PORTA:
		Local_u8GroupPinsValue = PINA_REG & 0xff;
		break;

	case PORTB:
		Local_u8GroupPinsValue = PINB_REG & 0xff;
		break;

	case PORTC:
		Local_u8GroupPinsValue = PINC_REG & 0xff;
		break;

	case PORTD:
		Local_u8GroupPinsValue = PIND_REG & 0xff;
		break;
	}
	return Local_u8GroupPinsValue;
}


