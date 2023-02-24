/*
 * Keypad_interface.h
 *
 *  Created on: Feb 10, 2023
 *      Author: omarm
 */

#ifndef HAL_KEYPAD_KEYPAD_INTERFACE_H_
#define HAL_KEYPAD_KEYPAD_INTERFACE_H_

/*---------- File includes ----------*/
#include "Keypad_config.h"
#include "Keypad_private.h"
#include "../../MCAL/ATMEGA32/DIO/DIO_interface.h"
#include "../../Services/BIT_MATH/BIT_MATH.h"
#include "../../Services/STD_TYPES/STD_TYPES.h"

/*---------- Function prototypes ----------*/

//This function will initialize the keypad ports
void KPD_vInitKeypad(void);

//This function shall be responsible for getting the pressed key from keypad
void KPD_vGetPressedKey(u8 *Copy_u8PressedKey);

#endif /* HAL_KEYPAD_KEYPAD_INTERFACE_H_ */
