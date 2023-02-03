/*
 * main.c
 *
 *  Created on: Jan 28, 2023
 *      Author: omarm
 */


#include <avr/io.h>
#include "BIT_OP.h"

void main(void)
{
	DDRA = 0b00000000; //A0 as input
	DDRB = 0b00000001; //B0 as output to LED
	PORTA = 0b00000001; //A0 as input pull up
	while(1)
	{
		if(GET_BIT(PINA,0) ==0)
		{
			PORTB = 0b00000001;
		}
		else
		{
			PORTB = 0b00000000;
		}
	}
}
