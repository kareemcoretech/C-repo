/*
 * DIO_Config.h
 *
 *  Created on: Feb 3, 2023
 *      Author: omarm
 */

#ifndef HAL_DIO_CONFIG_H_
#define HAL_DIO_CONFIG_H_

/******************** LCD Commands *******************/
#define CLEAR_COMMAND 0X01
#define TWO_LINE_LCD_Eight_BIT_MODE 0x38
#define CURSOR_OFF 0x0C
#define CURSOR_ON 0x0E
#define SET_CURSOR_LOCATION 0x80

/******************** LCD Ports *******************/
#define LCD_DATA_PORT	PORTD
#define LCD_CTRL_PORT	PORTC

#define PIN_RS	PIN0
#define PIN_RW	PIN1
#define PIN_EN	PIN2

#endif /* HAL_DIO_CONFIG_H_ */
