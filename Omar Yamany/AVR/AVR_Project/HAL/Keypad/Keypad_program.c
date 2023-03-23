/*
 * Keypad_program.c
 *
 *  Created on: Feb 10, 2023
 *      Author: omarm
 */

#include "Keypad_interface.h"
#include <util/delay.h>

const u8 GLOBAL_u8AkpdInterface [4][4] =
{
		{'7', '8', '9', '*'},
		{'4', '5', '6', '/'},
		{'1', '2', '3', '-'},
		{'%', '0', '=', '+'}
};

const u8 GLOBAL_u8ArowNumber [4] = {KPD_R1, KPD_R2, KPD_R3, KPD_R4};


const u8 GLOBAL_u8AcolNumber [4] = {KPD_C1, KPD_C2, KPD_C3, KPD_C4};


//This function will initialize the keypad ports
void KPD_vInitKeypad(void){
	DIO_vSet4LSBDir(KPD_PORT, OUTPUT);
	DIO_vSet4LSBValue(KPD_PORT, HIGH);
	DIO_vSet4MSBDir(KPD_PORT, INPUT);
	DIO_vSet4MSBValue(KPD_PORT, HIGH);


}


//This function shall be responsible for getting the pressed key from keypad
void KPD_vGetPressedKey(u8 *Copy_u8PressedKey){
	u8 LOCAL_u8RowCounter, LOCAL_u8ColCounter, LOCAL_u8PinValue, LOCAL_u8Flag=0;
	for(LOCAL_u8RowCounter=0;LOCAL_u8RowCounter<4;LOCAL_u8RowCounter++)
	{
		DIO_vSetPinValue(KPD_PORT, GLOBAL_u8ArowNumber[LOCAL_u8RowCounter], LOW);
		for(LOCAL_u8ColCounter=0;LOCAL_u8ColCounter<4;LOCAL_u8ColCounter++)
		{
			LOCAL_u8PinValue = DIO_u8ReadPinValue(KPD_PORT, GLOBAL_u8AcolNumber[LOCAL_u8ColCounter]);
			if (LOCAL_u8PinValue == BTN_PRESSED)
			{
				while(DIO_u8ReadPinValue(KPD_PORT, GLOBAL_u8AcolNumber[LOCAL_u8ColCounter]) == BTN_PRESSED)
				{
					_delay_ms(50);
				}
				*Copy_u8PressedKey = GLOBAL_u8AkpdInterface[LOCAL_u8RowCounter][LOCAL_u8ColCounter];
				LOCAL_u8Flag = 1;
				break;
			}
		}
		DIO_vSetPinValue(KPD_PORT, GLOBAL_u8ArowNumber[LOCAL_u8RowCounter], HIGH);
		if(LOCAL_u8Flag == 1)
		{
			break;
		}
	}
}

