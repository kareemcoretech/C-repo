/*
 * main.c
 *
 *  Created on: Jan 27, 2023
 *      Author: moham
 */


#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	unsigned int numbers[] = {
		0b00111111, // 0
		0b00000110, // 1
		0b01011011, // 2
		0b01001111, // 3
		0b01100110, // 4
		0b01101101, // 5
		0b01111101, // 6
		0b00000111, // 7
		0b01111111, // 8
		0b01101111  // 9
	};

	DDRD = 0b11111111;

	while(1){
		for(int i=0; i<10; i++){
			PORTD = numbers[i];
			_delay_ms(1000);
		}
	}
	return 0;
}
