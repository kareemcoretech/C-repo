/*
 * Lab4.c
 *
 *  Created on: Jan 31, 2023
 *      Author: toqae
 */

#include<avr/io.h>
#include<util/delay.h>

int main(void){
	DDRA = 0xff;


	while(1){
		PORTA = 0x01;
		_delay_ms(500);

		PORTA = 0x03;
		_delay_ms(500);

		PORTA = 0x07;
		_delay_ms(500);

		PORTA = 0x0f;
		_delay_ms(500);

		PORTA = 0x1f;
		_delay_ms(500);

		PORTA = 0x3f;
		_delay_ms(500);

		PORTA = 0x7f;
		_delay_ms(500);

		PORTA = 0xff;
		_delay_ms(500);
	}
}
