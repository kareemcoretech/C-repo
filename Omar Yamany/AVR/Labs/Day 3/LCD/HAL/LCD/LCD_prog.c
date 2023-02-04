/*
 * LCD_prog.c
 *
 *  Created on: Feb 3, 2023
 *      Author: omarm
 */

#include "LCD_Interface.h"
#define F_CPU 8000000UL
#include <util/delay.h>

void LCD_vInit(void)
{
	//Set data pins direction for MCU
	SET_Direction_ALL(LCD_DATA_PORT, OUTPUT);

	//set control pins direction for MCU
	SET_Direction(LCD_CTRL_PORT, PIN_RS, OUTPUT);
	SET_Direction(LCD_CTRL_PORT, PIN_RW, OUTPUT);
	SET_Direction(LCD_CTRL_PORT, PIN_EN, OUTPUT);

	_delay_ms(50);

	LCD_vSendCmd(TWO_LINE_LCD_Eight_BIT_MODE);

	_delay_ms(50);

	LCD_vSendCmd(CURSOR_OFF);

	_delay_ms(50);

	LCD_vSendCmd(CLEAR_COMMAND);

	_delay_ms(50);


}

void LCD_vSendCmd(u8 Copy_u8Command)
{
	SET_State(LCD_CTRL_PORT, PIN_RS, LOW);
	SET_State(LCD_CTRL_PORT, PIN_RW, LOW);
	_delay_ms(50);
	SET_State(LCD_CTRL_PORT, PIN_EN, HIGH);
	_delay_ms(50);
	SET_State_ALL(LCD_DATA_PORT, Copy_u8Command);
	_delay_ms(50);
	SET_State(LCD_CTRL_PORT, PIN_EN, LOW);
	_delay_ms(50);
}

void LCD_vDisplayChar(u8 Copy_u8Character)
{
	SET_State(LCD_CTRL_PORT, PIN_RS, HIGH);
	SET_State(LCD_CTRL_PORT, PIN_RW, LOW);
	_delay_ms(50);
	SET_State(LCD_CTRL_PORT, PIN_EN, HIGH);
	_delay_ms(50);
	SET_State_ALL(LCD_DATA_PORT, Copy_u8Character);
	_delay_ms(50);
	SET_State(LCD_CTRL_PORT, PIN_EN, LOW);
	_delay_ms(50);
}

