/*
 * DIO_Private.h
 *
 *  Created on: Jan 28, 2023
 *      Author: toqae
 */

#ifndef MCAL_DIO_DIO_PRIVATE_H_
#define MCAL_DIO_DIO_PRIVATE_H_

//PORT A
#define PORTA_REG *((volatile u8*)0x3B) //Address of PORT Register to write HIGH/1 or LOW/0
#define DDRA_REG *((volatile u8*)0x3A) //Address of DDR Register to control if it's INPUT/0 or OUTPUT/1
#define PINA_REG *((volatile u8*)0x39) //Address of PIN Register to know if it reads HIGH/1 or LOW/0

//PORT B
#define PORTB_REG *((volatile u8*)0x38) //Address of PORT Register to write HIGH/1 or LOW/0
#define DDRB_REG *((volatile u8*)0x37) //Address of DDR Register to control if it's INPUT/0 or OUTPUT/1
#define PINB_REG *((volatile u8*)0x36) //Address of PIN Register to know if it reads HIGH/1 or LOW/0

//PORT C
#define PORTC_REG *((volatile u8*)0x35) //Address of PORT Register to write HIGH/1 or LOW/0
#define DDRC_REG *((volatile u8*)0x34) //Address of DDR Register to control if it's INPUT/0 or OUTPUT/1
#define PINC_REG *((volatile u8*)0x33) //Address of PIN Register to know if it reads HIGH/1 or LOW/0

//PORT D
#define PORTD_REG *((volatile u8*)0x32) //Address of PORT Register to write HIGH/1 or LOW/0
#define DDRD_REG *((volatile u8*)0x31) //Address of DDR Register to control if it's INPUT/0 or OUTPUT/1
#define PIND_REG *((volatile u8*)0x30) //Address of PIN Register to know if it reads HIGH/1 or LOW/0

// -----------------------------------------------
#define PORTA 1
#define PORTB 2
#define PORTC 3
#define PORTD 4

// -----------------------------------------------
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

// -----------------------------------------------
#define HIGH 1
#define LOW 0

// -----------------------------------------------
#define INPUT 0
#define OUTPUT 1

// -----------------------------------------------
#define PULLUP 5
#define PILLDOWN 6


#endif /* MCAL_DIO_DIO_PRIVATE_H_ */
