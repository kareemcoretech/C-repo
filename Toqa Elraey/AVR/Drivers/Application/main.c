/*
 * main.c
 *
 *  Created on: Feb 3, 2023
 *      Author: toqae
 */

#include "../EHAL/LCD/LCD_Interface.h"
#include <util/delay.h>


int main(void){
	LCD_vInit();
	u8 Local_u8ArrayOfString[] = {"toqa elraey"};
	LCD_vDisplayString(Local_u8ArrayOfString);

	LCD_vGoToRowCol(ROW_TWO, COLUMN_FIVE);
	LCD_vDisplayChar('t');
	LCD_vDisplayChar('o');
	LCD_vDisplayChar('q');
	LCD_vDisplayChar('a');
	while(1){

	}
}
