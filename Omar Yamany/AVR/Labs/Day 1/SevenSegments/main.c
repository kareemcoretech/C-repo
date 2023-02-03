/*
 * main.c
 *
 *  Created on: Jan 27, 2023
 *      Author: omarm
 */


#include <avr/io.h>
#include <util/delay.h>

void main(void)
{
	char array[10] = {0b0111111, 0b0000110, 0b1011011, 0b1001111, 0b1100110, 0b1101101, 0b1111101, 0b0000111, 0b1111111, 0b1101111};
	DDRA = 0b11111111;
	while(1)
	{
		for(int i=0;i<10;i++)
		{
			PORTA = array[i];
			_delay_ms(200);
		}
	}
}
