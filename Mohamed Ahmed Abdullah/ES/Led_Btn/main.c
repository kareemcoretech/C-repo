/*
 * main.c
 *
 *  Created on: Jan 28, 2023
 *      Author: moham
 */


#include <avr/io.h>
#include "STD_TYPES.h"
#include "BIT_OP.h"

int main(void){
	DDRA  = 0b00000000; // A0 INPUT
	DDRB  = 0b00000001; // B0 OUTPUT

	PORTA = 0b00000001; // A0 PULL-UP

	while(1){
		if(GET_BIT(PINA,0) == 0) // CHECK IF 0
		{
			PORTB = 0b00000001; // TURN ON B0
		}else{
			PORTB = 0b00000000; // TURN ON B0
		}
	}
	return 0;
}
