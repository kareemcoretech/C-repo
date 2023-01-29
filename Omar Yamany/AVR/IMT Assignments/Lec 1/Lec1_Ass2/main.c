/*
 * main.c
 *
 *  Created on: Jan 27, 2023
 *      Author: omarm
 */


#include <avr/io.h>
#include <util/delay.h>
#define GET_BIT(r,b) ((r>>b)&1)

void main(void)
{
	DDRB = 0xFF;//PORTB is all output and connected to 8 LEDS
	DDRC = 0x00;//PORTC is all input and connected to one side of the DIP switch
	PORTC = 0xFF;//PORTC is now acting as a pull up resistor
	DDRD = 0b00000001;//PinD0 is output
	PORTD = 0b00000000;//PIND0 is 0 = acting as extra ground

	while(1)
	{
		if(GET_BIT(PINC, 0)==0)
		{
			flash();
		}
		else if(GET_BIT(PINC, 1)==0)
		{
			shift_left();
		}
		else if(GET_BIT(PINC, 2)==0)
		{
			shift_right();
		}
		else if(GET_BIT(PINC, 3)==0)
		{
			LED_Converge();
		}
		else if(GET_BIT(PINC, 4)==0)
		{
			LED_Diverge();
		}
		else if(GET_BIT(PINC, 5)==0)
		{
			ping_pong();
		}
		else if(GET_BIT(PINC, 6)==0)
		{
			snake_effect();
		}
		else if(GET_BIT(PINC, 7)==0)
		{
			converge_diverge();
		}
		else
		{
			PORTB = 0x00;
		}
	}
}

void flash()
{
	while(GET_BIT(PINC, 0)==0)
	{
		PORTB = 0xFF;
		_delay_ms(500);
		PORTB = 0x00;
		_delay_ms(500);
	}
}

void shift_left()
{
	while(GET_BIT(PINC, 1)==0)
	{
		PORTB = 0b00000001;
		_delay_ms(250);
		PORTB = 0b00000010;
		_delay_ms(250);
		PORTB = 0b00000100;
		_delay_ms(250);
		PORTB = 0b00001000;
		_delay_ms(250);
		PORTB = 0b00010000;
		_delay_ms(250);
		PORTB = 0b00100000;
		_delay_ms(250);
		PORTB = 0b01000000;
		_delay_ms(250);
		PORTB = 0b10000000;
		_delay_ms(250);
	}
}

void shift_right()
{
	while(GET_BIT(PINC, 2)==0)
	{
		PORTB = 0b10000000;
		_delay_ms(250);
		PORTB = 0b01000000;
		_delay_ms(250);
		PORTB = 0b00100000;
		_delay_ms(250);
		PORTB = 0b00010000;
		_delay_ms(250);
		PORTB = 0b00001000;
		_delay_ms(250);
		PORTB = 0b00000100;
		_delay_ms(250);
		PORTB = 0b00000010;
		_delay_ms(250);
		PORTB = 0b00000001;
		_delay_ms(250);
	}
}

void LED_Converge()
{
	while(GET_BIT(PINC, 3)==0)
	{
		PORTB = 0b10000001;
		_delay_ms(300);
		PORTB = 0b01000010;
		_delay_ms(300);
		PORTB = 0b00100100;
		_delay_ms(300);
		PORTB = 0b00011000;
		_delay_ms(300);
	}
}

void LED_Diverge()
{
	while(GET_BIT(PINC, 4)==0)
	{
		PORTB = 0b00011000;
		_delay_ms(300);
		PORTB = 0b00100100;
		_delay_ms(300);
		PORTB = 0b01000010;
		_delay_ms(300);
		PORTB = 0b10000001;
		_delay_ms(300);
	}
}

void ping_pong()
{
	while(GET_BIT(PINC, 5)==0)
	{
		PORTB = 0b00000001;
		_delay_ms(250);
		PORTB = 0b00000010;
		_delay_ms(250);
		PORTB = 0b00000100;
		_delay_ms(250);
		PORTB = 0b00001000;
		_delay_ms(250);
		PORTB = 0b00010000;
		_delay_ms(250);
		PORTB = 0b00100000;
		_delay_ms(250);
		PORTB = 0b01000000;
		_delay_ms(250);
		PORTB = 0b10000000;
		_delay_ms(250);
		PORTB = 0b01000000;
		_delay_ms(250);
		PORTB = 0b00100000;
		_delay_ms(250);
		PORTB = 0b00010000;
		_delay_ms(250);
		PORTB = 0b00001000;
		_delay_ms(250);
		PORTB = 0b00000100;
		_delay_ms(250);
		PORTB = 0b00000010;
		_delay_ms(250);
	}
}

void snake_effect()
{
	while(GET_BIT(PINC, 6)==0)
	{
		PORTB = 0b00000001;
		_delay_ms(300);
		PORTB = 0b00000011;
		_delay_ms(300);
		PORTB = 0b00000111;
		_delay_ms(300);
		PORTB = 0b00001111;
		_delay_ms(300);
		PORTB = 0b00011111;
		_delay_ms(300);
		PORTB = 0b00111111;
		_delay_ms(300);
		PORTB = 0b01111111;
		_delay_ms(300);
		PORTB = 0b11111111;
		_delay_ms(300);
		PORTB = 0b11111110;
		_delay_ms(300);
		PORTB = 0b11111100;
		_delay_ms(300);
		PORTB = 0b11111000;
		_delay_ms(300);
		PORTB = 0b11110000;
		_delay_ms(300);
		PORTB = 0b11100000;
		_delay_ms(300);
		PORTB = 0b11000000;
		_delay_ms(300);
		PORTB = 0b10000000;
		_delay_ms(300);
		PORTB = 0b00000000;
		_delay_ms(300);
	}
}

void converge_diverge()
{
	while(GET_BIT(PINC, 7)==0)
	{
		PORTB = 0b10000001;
		_delay_ms(300);
		PORTB = 0b01000010;
		_delay_ms(300);
		PORTB = 0b00100100;
		_delay_ms(300);
		PORTB = 0b00011000;
		_delay_ms(300);
		PORTB = 0b00100100;
		_delay_ms(300);
		PORTB = 0b01000010;
		_delay_ms(300);
	}
}
