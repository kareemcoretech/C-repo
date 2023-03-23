/*
 * KPD_Prog.c
 *
 *  Created on: Feb 10, 2023
 *      Author: moham
 */

#include "./KPD_Interface.h"
#include "../../MCAL/DIO/DIO_Interface.h"

const u8 GLOBAL_u8AkpdInterface [4][4] = {
		{'7','8','9','*'},
		{'4','5','6','/'},
		{'1','2','3','-'},
		{'D','0','=','+'}
};

const u8 GLOBAL_u8ArowNumber [4] = {KPD_R1, KPD_R2, KPD_R3, KPD_R4};
const u8 GLOBAL_u8AcolNumber [4] = {KPD_C1, KPD_C2, KPD_C3, KPD_C4};


void KPD_vInit(void){
	DIO_vSetPortDirection(KPD_PORT,0b00001111);
	DIO_vSetPortState(KPD_PORT, 0b11111111);
}

void KPD_vGetPressedKey(u8 *Copy_u8PressedKey){
	u8 LOCAL_u8RowCounter, LOCAL_u8ColCounter, LOCAL_u8PinValue, LOCAL_u8Flag = 0;
	for(LOCAL_u8RowCounter=0; LOCAL_u8RowCounter < 4; LOCAL_u8RowCounter++){
		DIO_vSetPinState(KPD_PORT, GLOBAL_u8ArowNumber[LOCAL_u8RowCounter], LOW);
		for(LOCAL_u8ColCounter=0; LOCAL_u8ColCounter < 4; LOCAL_u8ColCounter++){
			LOCAL_u8PinValue = DIO_u8GetPinState(KPD_PORT, GLOBAL_u8AcolNumber[LOCAL_u8ColCounter]);
			if(LOCAL_u8PinValue == BTN_PRESSED){
				*Copy_u8PressedKey = GLOBAL_u8AkpdInterface[LOCAL_u8RowCounter][LOCAL_u8ColCounter];
				LOCAL_u8Flag = 1;
				break;
			}
		}

		DIO_vSetPinState(KPD_PORT, GLOBAL_u8ArowNumber[LOCAL_u8RowCounter], HIGH);

		if(LOCAL_u8Flag == 1){
			break;
		}
	}
}
