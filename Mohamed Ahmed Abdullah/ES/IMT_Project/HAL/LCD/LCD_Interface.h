/*
 * LCD_Interface.h
 *
 *  Created on: Feb 3, 2023
 *      Author: moham
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_

#include "../../Services/STD_TYPES.h"

// Function to initialize LCD
void LCD_vInit(void);

// Function to clear LCD
void LCD_vCLR(void);

// Function to send commands to LCD
void LCD_vSendCmd(u8 Copy_u8Command);

// Function to display character on LCD
void LCD_vDisplayChar(u8 Copy_u8Character);

// Function to display number on LCD
void LCD_vDisplayNumber(s32 Copy_u8Number);

// Function to display string on LCD
void LCD_vDisplayString(u8 Copy_u8String[]);

// Function to go specific location
void LCD_vGoToRowCol(u8 Copy_u8RowNumber,u8 Copy_u8ColNumber);

// Function to store string
void LCD_vStoreSpecialString(u8* Copy_u8Number[]);

// Function to store char
void LCD_vStoreSpecialChar(u8* Copy_u8Number);

// Function to display string
void LCD_vDisplaySpecialString(u8* Copy_u8Array[], u8 Copy_u8Size);

// Function to display char
void LCD_vDisplaySpecialChar(u8* Copy_u8Array);

#endif /* HAL_LCD_LCD_INTERFACE_H_ */
