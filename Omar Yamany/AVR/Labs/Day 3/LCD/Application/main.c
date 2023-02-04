/*
 * main.c
 *
 *  Created on: Feb 3, 2023
 *      Author: omarm
 */


#include "../HAL/LCD/LCD_Interface.h"

void main(void)
{
	LCD_vInit();
	LCD_vDisplayChar('O');
	LCD_vDisplayChar('M');
	LCD_vDisplayChar('A');
	LCD_vDisplayChar('R');

	while(1)
	{

	}
}
