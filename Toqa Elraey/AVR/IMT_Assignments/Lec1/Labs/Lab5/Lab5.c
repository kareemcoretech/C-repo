/*
 * Lab5.c
 *
 *  Created on: Jan 31, 2023
 *      Author: toqae
 */


#include<avr/io.h>
#include<util/delay.h>


void main(void){
	DDRA = 0xff;
	unsigned char ARRAY[10] = {0b00111111, 0b00000110, 0b01011011, 0b1001111, 0b01100110, 0b01101101, 0b01111101, 0b00000111, 0b01111111, 0b01101111};

	while(1){
		for(int i = 0; i < 10; i++){
				PORTA = ARRAY[i];
				_delay_ms(1000);
				PORTA = 0x00;
				_delay_ms(1000);
			}
	}

}
