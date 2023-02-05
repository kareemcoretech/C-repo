/*
 * Lab6.c
 *
 *  Created on: Jan 31, 2023
 *      Author: toqae
 */

#include<avr/io.h>
#include<util/delay.h>

#define GET_BIT(r, b) ((r>>b)&1)

int main(void){
	DDRA = 0x01; //OUTPUT
	DDRB = 0x00; //INPUT
	PORTB = 0x01; //PULLUP

	while(1){
		if(GET_BIT(PINB, 0) == 0){
			PORTA = 0x01;
			_delay_ms(500);
			PORTA = 0x00;
			_delay_ms(500);
		}
		else{
			PORTA = 0x00;
		}
	}
}
