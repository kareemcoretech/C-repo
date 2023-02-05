/*
 * Assignment2.c
 *
 *  Created on: Feb 1, 2023
 *      Author: toqae
 */


#include<avr/io.h>
#include<util/delay.h>
#include "D:\IMT\IMT_PDFs\Interfacing\Codes\STD_TYPES.h"

#define GET_BIT(r, b) ((r>>b)&1)
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#define ON 0
#define OFF 1

int main(void){
	DDRD = 0xff;
	DDRB = 0x00;
	PORTB = 0xff;

	while(1){
		if(GET_BIT(PINB, PIN0) == ON){
			PORTD = 0xff;
			_delay_ms(500);
			PORTD = 0x00;
			_delay_ms(500);
		}
		else if(GET_BIT(PINB, PIN1) == ON){
			PORTD = 0x01;
			_delay_ms(250);
			PORTD = 0x02;
			_delay_ms(250);
			PORTD = 0x04;
			_delay_ms(250);
			PORTD = 0x08;
			_delay_ms(250);
			PORTD = 0x10;
			_delay_ms(250);
			PORTD = 0x20;
			_delay_ms(250);
			PORTD = 0x40;
			_delay_ms(250);
			PORTD = 0x80;
			_delay_ms(250);
		}
		else if(GET_BIT(PINB, PIN2) == ON){
			PORTD = 0x80;
			_delay_ms(250);
			PORTD = 0x40;
			_delay_ms(250);
			PORTD = 0x20;
			_delay_ms(250);
			PORTD = 0x10;
			_delay_ms(250);
			PORTD = 0x08;
			_delay_ms(250);
			PORTD = 0x04;
			_delay_ms(250);
			PORTD = 0x02;
			_delay_ms(250);
			PORTD = 0x01;
			_delay_ms(250);
		}
		else if(GET_BIT(PINB, PIN3) == ON){
			PORTD = 0x81;
			_delay_ms(300);
			PORTD = 0x42;
			_delay_ms(300);
			PORTD = 0x24;
			_delay_ms(300);
			PORTD = 0x18;
			_delay_ms(300);
		}
		else if(GET_BIT(PINB, PIN4) == ON){
			PORTD = 0x18;
			_delay_ms(300);
			PORTD = 0x24;
			_delay_ms(300);
			PORTD = 0x42;
			_delay_ms(300);
			PORTD = 0x81;
			_delay_ms(300);
		}
		else if(GET_BIT(PINB, PIN5) == ON){
			PORTD = 0x01;
			_delay_ms(250);
			PORTD = 0x02;
			_delay_ms(250);
			PORTD = 0x04;
			_delay_ms(250);
			PORTD = 0x08;
			_delay_ms(250);
			PORTD = 0x10;
			_delay_ms(250);
			PORTD = 0x20;
			_delay_ms(250);
			PORTD = 0x40;
			_delay_ms(250);
			PORTD = 0x80;
			_delay_ms(250);
			PORTD = 0x40;
			_delay_ms(250);
			PORTD = 0x20;
			_delay_ms(250);
			PORTD = 0x10;
			_delay_ms(250);
			PORTD = 0x08;
			_delay_ms(250);
			PORTD = 0x04;
			_delay_ms(250);
			PORTD = 0x02;
			_delay_ms(250);
		}
		else if(GET_BIT(PINB, PIN6) == ON){
			PORTD = 0x01;
			_delay_ms(300);
			PORTD = 0x03;
			_delay_ms(300);
			PORTD = 0x07;
		    _delay_ms(300);
			PORTD = 0x0f;
			_delay_ms(300);
			PORTD = 0x1f;
			_delay_ms(300);
			PORTD = 0x3f;
			_delay_ms(300);
			PORTD = 0x7f;
			_delay_ms(300);
			PORTD = 0xff;
			_delay_ms(300);
		}
		else if(GET_BIT(PINB, PIN7) == ON){
			PORTD = 0x81;
			_delay_ms(300);
			PORTD = 0x42;
			_delay_ms(300);
			PORTD = 0x24;
			_delay_ms(300);
			PORTD = 0x18;
			_delay_ms(300);
			PORTD = 0x24;
			_delay_ms(300);
			PORTD = 0x42;
			_delay_ms(300);
		}
		else{
			PORTD = 0x00;
		}
	}
}
