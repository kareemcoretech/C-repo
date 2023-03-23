/*
 * LCD_Private.h
 *
 *  Created on: Feb 3, 2023
 *      Author: moham
 */

#ifndef HAL_LCD_LCD_PRIVATE_H_
#define HAL_LCD_LCD_PRIVATE_H_

#define ROW_ONE 1
#define ROW_TWO 2

#define ROW_ONE_ADD 0x00

#define ROW_TWO_ADD 0x40

#define CLEAR_COMMAND 0x01
#define TWO_LINE_LCD_EIGHT_BIT_MODE 0x38

#define CURSOR_OFF 0x0C
#define CURSOR_ON  0x0E

#define SET_CURSOR_LOCATION 0x80

#define SET_DDRAM_ADD 0b10000000
#define SET_CGRAM_ADD 0b01000000

#endif /* HAL_LCD_LCD_PRIVATE_H_ */
