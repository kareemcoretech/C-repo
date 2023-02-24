/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : LCD_config.h                                    	     */
/* Date          : Feb 5, 2023                                           */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#include"../../MCAL/ATMEGA32/DIO/DIO_private.h"

#ifndef HAL_LCD_LCD_CONFIG_H_
#define HAL_LCD_LCD_CONFIG_H_

/********** LCD Ports **********/
#define LCD_DATA_PORT PORTD
#define LCD_CTRL_PORT PORTC
#define RS_PIN PIN0
#define RW_PIN PIN1
#define EN_PIN PIN2
#define ROW_ONE 1
#define ROW_TWO 2
#define ROW_ONE_ADD 0x00
#define ROW_TWO_ADD 0x40

/********** LCD Commands **********/

//Function set
#define TWO_LINE_EIGHT_BITS_BIG_FONT 0x3C //0b00111100

//Display ON/OFF Control
#define CURSOR_ON 0x0F //0b00001111
#define CURSOR_OFF 0x0C //0b00001100

//Display Clear
#define CLEAR_COMMAND 0x01 //0b00000001

//Entry Mode Set
#define START_FROM_LEFT_NO_SHIFT 0x06 //0b00000110

//Set DDRAM Address
#define SET_CURSOR_LOCATION 0x80 //0b1xxxxxxx (needs value to be added)

//Set CGRAM Address
#define SET_CGRAM_LOCATION 0x40 //0b01xxxxxx (needs value to be addded)

//Shift right or left
#define RIGHT 1
#define LEFT 2
#define SHIFT_RIGHT 0x1C //0b00011100
#define SHIFT_LEFT 0x18 //0b00011000

#endif /* HAL_LCD_LCD_CONFIG_H_ */
