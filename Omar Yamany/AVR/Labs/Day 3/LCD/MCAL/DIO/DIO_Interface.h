/*
 * DIO_Interface.h
 *
 *  Created on: Jan 28, 2023
 *      Author: omarm
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_

#include "../../Services/STD_TYPES.h"
#include "../../Services/BIT_OP.h"
#include "DIO_Private.h"

void SET_Direction(u8 Copy_PORT, u8 Copy_PIN, u8 Direction);
void SET_State(u8 Copy_PORT, u8 Copy_PIN, u8 State);
u8 GET_State(u8 Copy_PORT, u8 Copy_PIN);
void SET_Direction_4LSB(u8 Copy_PORT, u8 Direction);
void SET_Direction_4MSB(u8 Copy_PORT, u8 Direction);
void SET_State_4LSB(u8 Copy_PORT, u8 State);
void SET_State_4MSB(u8 Copy_PORT, u8 State);
void SET_State_ALL(u8 Copy_PORT, u8 State);
void SET_Direction_ALL(u8 Copy_PORT, u8 Direction);

#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
