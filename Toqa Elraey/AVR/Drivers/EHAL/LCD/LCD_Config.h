/*
 * LCD_Config.h
 *
 *  Created on: Feb 3, 2023
 *      Author: toqae
 */

#ifndef EHAL_LCD_LCD_CONFIG_H_
#define EHAL_LCD_LCD_CONFIG_H_

#include "../../MCAL/DIO/DIO_Interface.h"

/************************ LCD COMMANDS *****************************/
#define CLEAR_COMMAND 0x01

#define TWO_LINE_LCD_Eight_BIT_MODE 0x38

#define CURSOR_OFF 0x0C

#define CURSOR_ON 0x0E

#define SET_CURSOR_LOCATION 0x80

#define ROW_ONE_ADD 0x00

#define ROW_TWO_ADD 0x40


/************************ LCD PORTS *****************************/
#define LCD_DATA_PORT PORTD

#define LCD_CTRL_PORT PORTC


#define PIN_RS PIN0

#define PIN_RW PIN1

#define PIN_EN PIN2

#endif /* EHAL_LCD_LCD_CONFIG_H_ */
