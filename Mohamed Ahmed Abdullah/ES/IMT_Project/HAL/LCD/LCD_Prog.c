/*
 * LCD_Prog.c
 *
 *  Created on: Feb 3, 2023
 *      Author: mohamed ahmed
 */

#include "LCD_Interface.h"
#include "LCD_Config.h"
#include "LCD_Private.h"

#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../Services/BIT_OP.h"
#include "../../Services/MCU_Private.h"

#define F_CPU 8000000UL
#include <util/delay.h>

// Function to initialize LCD
void LCD_vInit(void){
	// Set the direction of the data port to be output
	DIO_vSetPortDirection(LCD_DATA_PORT, OUTPUTS);

	// Set the direction of control port pins to be output
	DIO_vSetPinDirection(LCD_CTRL_PORT, PIN_RS, OUTPUT);
	DIO_vSetPinDirection(LCD_CTRL_PORT, PIN_EN, OUTPUT);
	DIO_vSetPinDirection(LCD_CTRL_PORT, PIN_RW, OUTPUT);

	_delay_ms(1);

	LCD_vSendCmd(TWO_LINE_LCD_EIGHT_BIT_MODE);

	_delay_ms(1);

	LCD_vSendCmd(CURSOR_OFF);

	_delay_ms(1);

	LCD_vSendCmd(CLEAR_COMMAND);

	_delay_ms(1);
}

// Function to clear LCD
void LCD_vCLR(void){
	LCD_vSendCmd(CLEAR_COMMAND);
}

// Function to send commands to LCD
void LCD_vSendCmd(u8 Copy_u8Command){
	DIO_vSetPinState(LCD_CTRL_PORT, PIN_RS, LOW);
	DIO_vSetPinState(LCD_CTRL_PORT, PIN_RW, LOW);
	_delay_ms(1);
	DIO_vSetPinState(LCD_CTRL_PORT, PIN_EN, HIGH);
	_delay_ms(1);
	DIO_vSetPortState(LCD_DATA_PORT, Copy_u8Command);
	_delay_ms(1);
	DIO_vSetPinState(LCD_CTRL_PORT, PIN_EN, LOW);
	_delay_ms(1);
}

// Function to display character to LCD
void LCD_vDisplayChar(u8 Copy_u8Character){
	DIO_vSetPinState(LCD_CTRL_PORT, PIN_RS, HIGH);
	DIO_vSetPinState(LCD_CTRL_PORT, PIN_RW, LOW);
	_delay_ms(1);
	DIO_vSetPinState(LCD_CTRL_PORT, PIN_EN, HIGH);
	_delay_ms(1);
	DIO_vSetPortState(LCD_DATA_PORT, Copy_u8Character);
	_delay_ms(1);
	DIO_vSetPinState(LCD_CTRL_PORT, PIN_EN, LOW);
	_delay_ms(1);
}

// Function to display character to LCD
void LCD_vDisplayNumber(s32 Copy_u8Number){
	u16 buffer[20];
	if (itoa(Copy_u8Number, buffer, 10))
	{
		LCD_vDisplayString(buffer);
	}
}

// Function to display a string on LCD
void LCD_vDisplayString(u8* Copy_u8String){
	u8 Local_u8Counter = 0;
	while(Copy_u8String[Local_u8Counter] != '\0'){
		LCD_vDisplayChar(Copy_u8String[Local_u8Counter]);
		Local_u8Counter++;
	}
}

// Function to go specific location
void LCD_vGoToRowCol(u8 Copy_u8RowNumber, u8 Copy_u8ColNumber){
	if(Copy_u8RowNumber <= 2 && Copy_u8ColNumber <=40){
		switch(Copy_u8RowNumber){
			case ROW_ONE:
				LCD_vSendCmd(SET_CURSOR_LOCATION | (ROW_ONE_ADD | Copy_u8ColNumber));
				break;
			case ROW_TWO:
				LCD_vSendCmd(SET_CURSOR_LOCATION | (ROW_TWO_ADD | Copy_u8ColNumber));
				break;
		}
	}else{
		LCD_vDisplayString("Invalid Loc");
	}
}

void LCD_vStoreSpecialChar(u8* Copy_u8Array){
	for(int i=0; i<8;i++){
		LCD_vDisplayChar(Copy_u8Array[i]);
	}
}

void LCD_vStoreSpecialString(u8* Copy_u8Array[]){
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			LCD_vDisplayChar(Copy_u8Array[i][j]);
		}
	}
}

// Function to display string
void LCD_vDisplaySpecialString(u8* Copy_u8Array[], u8 Copy_u8Size){
	LCD_vSendCmd(SET_CGRAM_ADD);

	LCD_vStoreSpecialString(Copy_u8Array);

	LCD_vSendCmd(SET_DDRAM_ADD);

	for(int i=0; i<Copy_u8Size;i++){
		LCD_vDisplayChar(i);
	}
}

// Function to display char
void LCD_vDisplaySpecialChar(u8* Copy_u8Number){
	LCD_vSendCmd(SET_CGRAM_ADD);

	LCD_vStoreSpecialChar(Copy_u8Number);

	LCD_vSendCmd(SET_DDRAM_ADD);

	LCD_vDisplayChar(0);
}
