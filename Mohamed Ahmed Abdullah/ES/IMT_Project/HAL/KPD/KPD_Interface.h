/*
 * KPD_Interface.h
 *
 *  Created on: Feb 10, 2023
 *      Author: moham
 */

#ifndef HAL_KPD_KPD_INTERFACE_H_
#define HAL_KPD_KPD_INTERFACE_H_


#include "./KPD_Config.h"
#include "./KPD_Private.h"

#include "../../Services/BIT_OP.h"
#include "../../Services/STD_TYPES.h"

// Function to initilize keypad
void KPD_vInit(void);

// Function to getting the pressed key from keypad
void KPD_vGetPressedKey(u8 *Copy_u8PressedKey);

#endif /* HAL_KPD_KPD_INTERFACE_H_ */
