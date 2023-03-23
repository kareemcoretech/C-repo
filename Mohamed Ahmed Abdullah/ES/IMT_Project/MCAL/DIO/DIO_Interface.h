/*
 * DIO_Interface.h
 *
 *  Created on: Jan 28, 2023
 *      Author: moham
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_

#include "../../Services/STD_TYPES.h"
#include "./DIO_Private.h"

// Set direction
void DIO_vSetPortDirection(u8 Copy_u8Port, u8 Copy_u8Direction);
void DIO_vSetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction);

// Set state
void DIO_vSetPortState(u8 Copy_u8Port, u8 Copy_u8State);
void DIO_vSetPinState(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8State);

// Get state of pin
u8 DIO_u8GetPinState(u8 Copy_u8Port, u8 Copy_u8Pin);

#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
