/*
 * DIO_Private.h
 *
 *  Created on: Jan 28, 2023
 *      Author: moham
 */

#ifndef MCAL_DIO_DIO_PRIVATE_H_
#define MCAL_DIO_DIO_PRIVATE_H_

#include "../../Services/STD_TYPES.h"

/*===============================================*/

/* PORTS Registers */

// PORT A
#define PINA_REG  *((volatile u8*) 0x39) // Get data on  PORT A  [0 for Low, 1 for High]
#define DDRA_REG  *((volatile u8*) 0x3A) // Direction of PORT A  [0 for Input, 1 for Output]
#define PORTA_REG *((volatile u8*) 0x3B) // Set data on  PORT A  [0 for Low, 1 for High]

// PORT B
#define PINB_REG  *((volatile u8*) 0x36) // Get data on  PORT B  [0 for Low, 1 for High]
#define DDRB_REG  *((volatile u8*) 0x37) // Direction of PORT B  [0 for Input, 1 for Output]
#define PORTB_REG *((volatile u8*) 0x38) // Set data on  PORT B  [0 for Low, 1 for High]

// PORT C
#define PINC_REG  *((volatile u8*) 0x33) // Get data on  PORT C  [0 for Low, 1 for High]
#define DDRC_REG  *((volatile u8*) 0x34) // Direction of PORT C  [0 for Input, 1 for Output]
#define PORTC_REG *((volatile u8*) 0x35) // Set data on  PORT C  [0 for Low, 1 for High]

// PORT D
#define PIND_REG  *((volatile u8*) 0x30) // Get data on  PORT D  [0 for Low, 1 for High]
#define DDRD_REG  *((volatile u8*) 0x31) // Direction of PORT D  [0 for Input, 1 for Output]
#define PORTD_REG *((volatile u8*) 0x32) // Set data on  PORT D  [0 for Low, 1 for High]

/* PORTS */
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

/* PINS */
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

/*===============================================*/

/* Others */

// Data of ports
#define LOW  0
#define HIGH 1

#define LOWS  0b00000000
#define HIGHS 0b11111111

// Direction of ports
#define INPUT  0
#define OUTPUT 1

#define INPUTS  0b00000000
#define OUTPUTS 0b11111111

// Type of pull
#define PULL_UP   0
#define PULL_DOWN 1

#endif /* MCAL_DIO_DIO_PRIVATE_H_ */
