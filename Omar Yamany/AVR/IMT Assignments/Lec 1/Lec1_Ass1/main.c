/*
 * main.c
 *
 *  Created on: Jan 27, 2023
 *      Author: omarm
 */

#include <avr/io.h>
#include <avr/delay.h>

void main(void)
{
	char array[10] = {0b0111111, 0b0000110, 0b1011011, 0b1001111, 0b1100110, 0b1101101, 0b1111101, 0b0000111, 0b1111111, 0b1101111};
	DDRC = 0xFF;
	DDRD = 0xFF;
	DDRA = 0x07;
	while(1)
	{
		PORTA = 0b00000100;
		for(int i=10;i>0;i--)
		{
			switch(i)
			{
			case 1:
				PORTC = array[1];
				_delay_ms(1000);
				break;
			case 2:
				PORTC = array[2];
				_delay_ms(1000);
				break;
			case 3:
				PORTC = array[3];
				_delay_ms(1000);
				break;
			case 4:
				PORTC = array[4];
				_delay_ms(1000);
				break;
			case 5:
				PORTC = array[5];
				_delay_ms(1000);
				break;
			case 6:
				PORTC = array[6];
				_delay_ms(1000);
				break;
			case 7:
				PORTC = array[7];
				_delay_ms(1000);
				break;
			case 8:
				PORTC = array[8];
				_delay_ms(1000);
				break;
			case 9:
				PORTD = array[0];
				PORTC = array[9];
				_delay_ms(1000);
				break;
			case 10:
				PORTD = array[1];
				PORTC = array[0];
				_delay_ms(1000);
				break;
			}
		}
		PORTA = 0b00000010;
		for(int i=3;i>0;i--)
		{
			switch(i)
			{
			case 1:
				PORTC = array[1];
				_delay_ms(1000);
				break;
			case 2:
				PORTC = array[2];
				_delay_ms(1000);
				break;
			case 3:
				PORTC = array[3];
				_delay_ms(1000);
				break;
			}
		}
		PORTA = 0b00000001;
		for(int i=10;i>0;i--)
		{
			switch(i)
			{
			case 1:
				PORTC = array[1];
				_delay_ms(1000);
				break;
			case 2:
				PORTC = array[2];
				_delay_ms(1000);
				break;
			case 3:
				PORTC = array[3];
				_delay_ms(1000);
				break;
			case 4:
				PORTC = array[4];
				_delay_ms(1000);
				break;
			case 5:
				PORTC = array[5];
				_delay_ms(1000);
				break;
			case 6:
				PORTC = array[6];
				_delay_ms(1000);
				break;
			case 7:
				PORTC = array[7];
				_delay_ms(1000);
				break;
			case 8:
				PORTC = array[8];
				_delay_ms(1000);
				break;
			case 9:
				PORTD = array[0];
				PORTC = array[9];
				_delay_ms(1000);
				break;
			case 10:
				PORTD = array[1];
				PORTC = array[0];
				_delay_ms(1000);
				break;
			}
		}
	}
}

