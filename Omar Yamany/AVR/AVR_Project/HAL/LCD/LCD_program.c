/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : LCD_program.c                                         */
/* Date          : Feb 5, 2023                                           */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/



#include "LCD_interface.h"
#define F_CPU 8000000UL //CPU Frequency is 8MHZ
#include <util/delay.h>

//Function to initialize LCD
void LCD_vInit(void){
	DIO_vSetGroupDir(LCD_DATA_PORT, OUTPUT);
	DIO_vSetPinDir(LCD_CTRL_PORT, RS_PIN, OUTPUT);
	DIO_vSetPinDir(LCD_CTRL_PORT, RW_PIN, OUTPUT);
	DIO_vSetPinDir(LCD_CTRL_PORT, EN_PIN, OUTPUT);
	_delay_ms(10);
	LCD_vSendCmd(TWO_LINE_EIGHT_BITS_BIG_FONT);
	_delay_ms(10);
	LCD_vSendCmd(CURSOR_ON);
	_delay_ms(10);
	LCD_vSendCmd(CLEAR_COMMAND);
	_delay_ms(10);
	LCD_vSendCmd(START_FROM_LEFT_NO_SHIFT);
	_delay_ms(10);
}

//Function to send a command to the LCD
void LCD_vSendCmd(u8 Copy_u8Command){
	DIO_vSetPinValue(LCD_CTRL_PORT, RS_PIN, LOW);
	DIO_vSetPinValue(LCD_CTRL_PORT, RW_PIN, LOW);
	_delay_ms(10);
	DIO_vSetPinValue(LCD_CTRL_PORT, EN_PIN, HIGH);
	_delay_ms(10);
	DIO_vSetGroupValue(LCD_DATA_PORT, Copy_u8Command);
	//PORTD_REG = Copy_u8Command;
	_delay_ms(10);
	DIO_vSetPinValue(LCD_CTRL_PORT, EN_PIN, LOW);
	_delay_ms(10);
}

//Function to display a character on the LCD
void LCD_vDisplayChar(u8 Copy_u8Character){
	DIO_vSetPinValue(LCD_CTRL_PORT, RS_PIN, HIGH);
	DIO_vSetPinValue(LCD_CTRL_PORT, RW_PIN, LOW);
	_delay_ms(10);
	DIO_vSetPinValue(LCD_CTRL_PORT, EN_PIN, HIGH);
	_delay_ms(10);
	DIO_vSetGroupValue(LCD_DATA_PORT, Copy_u8Character);
	_delay_ms(10);
	DIO_vSetPinValue(LCD_CTRL_PORT, EN_PIN, LOW);
	_delay_ms(10);
}

//Function to display a string on the LCD
void LCD_vDisplayString(u8 *Copy_u8String){
	for(int i=0;Copy_u8String[i]!='\0';i++)
	{
		LCD_vDisplayChar(Copy_u8String[i]);
	}
}

//Function to display a number on the LCD
void LCD_vDisplayNumber(u16 Copy_u8Number){
	if(Copy_u8Number == 0)
	{
		LCD_vDisplayChar('0');
	}
	else
	{
		u8 Local_u8TempNumber;
		u8 Array[5];
		u8 j=0;
		while(Copy_u8Number != 0)
		{
			Local_u8TempNumber = Copy_u8Number%10;
			Copy_u8Number /= 10;
			Array[j] = Local_u8TempNumber;
			j++;
		}
		for(int i=j-1;i>=0;i--)
		{
			LCD_vDisplayChar(Array[i]+48);
		}
	}
}

//Function to change cursor location
void LCD_vGoToRowCol(u8 Copy_u8RowNumber, u8 Copy_u8ColNumber){
	if((Copy_u8ColNumber >= 0) || (Copy_u8ColNumber <= 0))
	{
		switch(Copy_u8RowNumber)
		{
		case ROW_ONE: LCD_vSendCmd(SET_CURSOR_LOCATION | (ROW_ONE_ADD | Copy_u8ColNumber)); break;
		case ROW_TWO: LCD_vSendCmd(SET_CURSOR_LOCATION | (ROW_TWO_ADD | Copy_u8ColNumber)); break;
		}
	}
	else
	{
		LCD_vDisplayString("Error, column number exceeded 15");
	}
}

//Function to shift display right or left
void LCD_vShiftDisplay(u8 Copy_u8ShiftDirection, u8 Copy_u8ShiftIterations){
	switch(Copy_u8ShiftDirection)
	{
	case LEFT:
	for(int i=0;i<Copy_u8ShiftIterations;i++)
	{
		LCD_vSendCmd(SHIFT_LEFT);
		_delay_ms(100);
	}
	break;
	case RIGHT:
	for(int i=0;i<Copy_u8ShiftIterations;i++)
	{
		LCD_vSendCmd(SHIFT_RIGHT);
		_delay_ms(100);
	}
	break;
	}
}

//Function to create and print special character on LCD
void LCD_vStoreSpecChar(u8 *Copy_u8ASpecChar, u8 Copy_u8CGRAM_Location)
{
	LCD_vSendCmd(SET_CGRAM_LOCATION | (Copy_u8CGRAM_Location*8));
	for(int i=0; i<8;i++)
	{
		LCD_vDisplayChar(Copy_u8ASpecChar[i]);
		//LCD_vSendCmd(0b01000000 | i);
	}
	_delay_ms(100);

}
