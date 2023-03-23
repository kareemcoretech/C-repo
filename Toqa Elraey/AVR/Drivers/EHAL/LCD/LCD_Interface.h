/*
 * LCD_Interface.h
 *
 *  Created on: Feb 3, 2023
 *      Author: toqae
 */

#ifndef EHAL_LCD_LCD_INTERFACE_H_
#define EHAL_LCD_LCD_INTERFACE_H_

#include "LCD_Config.h"
#include "LCD_Private.h"
#include "../../Services/BIT_OP.h"
#include "../../Services/STD_TYPES.h"

//Function to Initialize LCD
void LCD_vInit(void);

//Function to sent Commands to LCD
void LCD_vSendCMD(u8 Copy_u8Command);

//Function to display character to LCD
void LCD_vDisplayChar(u8 Copy_u8Character);

//Function to display Strings to LCD
void LCD_vDisplayString(u8 *Copy_u8String);

//Function to change Cursor Position
void LCD_vGoToRowCol(u8 Copy_u8RowNumber, u8 Copy_ColNumber);

#endif /* EHAL_LCD_LCD_INTERFACE_H_ */
