/*
 * LCD_Interface.h
 *
 *  Created on: Feb 3, 2023
 *      Author: omarm
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_

/*-------------File includes-----------------*/

#include "../../Services/BIT_OP.h"
#include "../../Services/STD_TYPES.h"
#include "LCD_Config.h"
#include "../../MCAL/DIO/DIO_Interface.h"

/*-------------Function Prototypes-----------*/

//Function to initialize LCD
void LCD_vInit(void);

//Function to send commands to LCD
void LCD_vSendCmd(u8 Copy_u8Command);

//Function to display character to LCD
void LCD_vDisplayChar(u8 Copy_u8Character);



#endif /* HAL_LCD_LCD_INTERFACE_H_ */
