/*
 * LCD_Prog.c
 *
 *  Created on: Feb 3, 2023
 *      Author: toqae
 */

#include "LCD_Interface.h"
#include <util/delay.h>

#define F_CPU 8000000UL
#define tsu1 50



/************************ Functions Implementation *****************************/

void LCD_vInit(void){
	// Set Data PINS direction for MCU
	DIO_vSetGroupDir(LCD_DATA_PORT, OUTPUT);


	// Set Control PINS direction for MCU
	DIO_vSetPinDir(LCD_CTRL_PORT, PIN_RS, OUTPUT);
	DIO_vSetPinDir(LCD_CTRL_PORT, PIN_RW, OUTPUT);
	DIO_vSetPinDir(LCD_CTRL_PORT, PIN_EN, OUTPUT);

	_delay_ms(50);

	LCD_vSendCMD(TWO_LINE_LCD_Eight_BIT_MODE);

	_delay_ms(50);

	LCD_vSendCMD(CURSOR_OFF);

	_delay_ms(50);

	LCD_vSendCMD(CLEAR_COMMAND);

	_delay_ms(50);
}


void LCD_vSendCMD(u8 Copy_u8Command){

	DIO_vSetPinValue(LCD_CTRL_PORT, PIN_RS, LOW);
	DIO_vSetPinValue(LCD_CTRL_PORT, PIN_RW, LOW);

	_delay_ms(50);
	DIO_vSetPinValue(LCD_CTRL_PORT, PIN_EN, HIGH);

	_delay_ms(50);
	DIO_vSetGroupValue(LCD_DATA_PORT, Copy_u8Command);

	_delay_ms(50);
	DIO_vSetPinValue(LCD_CTRL_PORT, PIN_EN, LOW);

	_delay_ms(50);
}

void LCD_vDisplayChar(u8 Copy_u8Character){

	DIO_vSetPinValue(LCD_CTRL_PORT, PIN_RS, HIGH);
	DIO_vSetPinValue(LCD_CTRL_PORT, PIN_RW, LOW);

	_delay_ms(50);
	DIO_vSetPinValue(LCD_CTRL_PORT, PIN_EN, HIGH);

	_delay_ms(50);
	DIO_vSetGroupValue(LCD_DATA_PORT, Copy_u8Character);


	_delay_ms(50);
	DIO_vSetPinValue(LCD_CTRL_PORT, PIN_EN, LOW);

	_delay_ms(50);
}

void LCD_vDisplayString(u8 *Copy_u8String){
	u8 Local_u8StringCounter = 0;
	while(Copy_u8String[Local_u8StringCounter] != '\0')
	{
		LCD_vDisplayChar(Copy_u8String[Local_u8StringCounter]);
		Local_u8StringCounter++;
	}
}

void LCD_vGoToRowCol(u8 Copy_u8RowNumber, u8 Copy_ColNumber){
	if(Copy_u8RowNumber < LAST_ROW && Copy_ColNumber < LAST_SEEN_COLUMN)
	{
		switch(Copy_u8RowNumber)
		{
		case ROW_ONE:
			LCD_vSendCMD(SET_CURSOR_LOCATION | (ROW_ONE_ADD | Copy_ColNumber));
		    break;

		case ROW_TWO:
			LCD_vSendCMD(SET_CURSOR_LOCATION | (ROW_TWO_ADD | Copy_ColNumber));
			break;
			}
	}
	else
	{
		u8 Local_u8ErrorMSG[] = {"ERROR"};
		LCD_vSendCMD(SET_CURSOR_LOCATION | (ROW_TWO_ADD | COLUMN_ONE));
		LCD_vDisplayString(Local_u8ErrorMSG);
		while(1){

		}

	}


}
