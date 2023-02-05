/*
 * Assignment1.c
 *
 *  Created on: Jan 31, 2023
 *      Author: toqae
 */


#include<avr/io.h>
#include<util/delay.h>
#include "D:\IMT\IMT_PDFs\Interfacing\Codes\STD_TYPES.h"

int main(void){
	u8 timer[11] = {0b00000000, 0b00111111, //ZERO
			0b00000110, //ONE
			0b01011011, //TWO
			0b1001111, //THREE
			0b01100110, //FOUR
			0b01101101, //FIVE
			0b01111101, //SIX
			0b00000111, //SEVEN
			0b01111111, //EIGHT
			0b01101111}; //NINE

	u8 tenth[3] = {0b00000000,0b00111111, 0b00000110};

	DDRA = 0xff; // 7-SEGMENT OUTPEUT
    DDRB = 0xff; // 7-SEGMENT OUTPUT
    DDRC = 0x91; // LEDs OUTPUT  GREEN C0 --- YELLOW C4 --- RED C8

    while(1){
    	//Turning on the Green LED for 10 seconds
    	PORTC = 0x01;
    	for(u8 j = 2; j > 0; j--){
    		PORTB = tenth[j];
    		if(j == 2){
    			PORTA = timer[1];
    			_delay_ms(1000);
    		}
    		else{
    			for(u8 i = 10; i > 1; i--){
    		    	PORTA = timer[i];
    		    	_delay_ms(1000);
    		   }
    		}
    	}

    	//Turning on the Yellow LED for 3 seconds
    	PORTC = 0x10;
    	for(u8 j = 4; j > 1; j--){
    		PORTA = timer[j];
    		_delay_ms(1000);
    	}

    	//Turning on the RED LED for 10 seconds
    	PORTC = 0x80;
    	for(u8 j = 2; j > 0; j--){
    	    PORTB = tenth[j];
    	    if(j == 2){
    	    	PORTA = timer[1];
    	    	_delay_ms(1000);
    	    }
    	    else{
    	    	for(u8 i = 10; i > 1; i--){
    	    		PORTA = timer[i];
    	    		_delay_ms(1000);
    	    	}
    	    }
    	}
    }
}
