/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : LCD_interface.h                                       */
/* Date          : Feb 5, 2023                                           */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/
#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_

/********** File includes **********/
#include "../../Services/BIT_MATH/BIT_MATH.h"
#include "../../Services/STD_TYPES/STD_TYPES.h"
#include "../../MCAL/ATMEGA32/DIO/DIO_interface.h"
#include "LCD_config.h"
#include "LCD_private.h"


/********** Function prototypes **********/

//Function to initialize LCD
void LCD_vInit(void);

//Function to send a command to the LCD
void LCD_vSendCmd(u8 Copy_u8Command);

//Function to display a character on the LCD
void LCD_vDisplayChar(u8 Copy_u8Character);

//Function to display a string on the LCD
void LCD_vDisplayString(u8 *Copy_u8String);

//Function to display a number on the LCD
void LCD_vDisplayNumber(u16 Copy_u8Number);

//Function to change cursor location
void LCD_vGoToRowCol(u8 Copy_u8RowNumber, u8 Copy_u8ColNumber);

//Function to shift display right or left
void LCD_vShiftDisplay(u8 Copy_u8ShiftDirection, u8 Copy_u8ShiftIterations);

//Function to create and print special character on LCD
void LCD_vStoreSpecChar(u8 *Copy_u8SpecChar, u8 Copy_u8CGRAM_Location);

#endif /* HAL_LCD_LCD_INTERFACE_H_ */
