/*
 * Lab3.c
 *
 *  Created on: Jan 31, 2023
 *      Author: toqae
 */


#include<avr/io.h>
#include<util/delay.h>

int main(void){
	DDRA = 0x01;

	while(1){
		PORTA = 0x01;
	    _delay_ms(1000);
		PORTA = 0x00;
		_delay_ms(1000);
	}
}
