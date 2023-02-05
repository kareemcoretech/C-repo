/*
 * DIO_Interface.h
 *
 *  Created on: Jan 28, 2023
 *      Author: toqae
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_

#include "DIO_Private.h"
#include "../../Services/BIT_OP.h"
#include "../../Services/STD_TYPES.h"



/********************** Set the Direction(INPUT/OUTPUT) of a Specific PIN in a PORT ************************/
void DIO_vSetPinDir(u8 Copy_u8PortName, u8 Copy_u8PinNum, u8 Copy_u8PinDir);


/********************** Set the Direction of a Group of PINs in a PORT ************************/
void DIO_vSetGroupDir(u8 Copy_u8PortName, u8 Copy_u8GroupPinsDir);


/********************** Set the Value(HIGH/LOW) of a Specific PIN in a PORT ************************/
void DIO_vSetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNum, u8 Copy_u8PinVal);


/********************** Set the Value(HIGH/LOW) of a group of PINs in a PORT ************************/
void DIO_vSetGroupValue(u8 Copy_u8PortName, u8 Copy_u8GroupPinsVal);


/********************** Read a Value(HIGH1/LOW0) of a Specific PIN in a PORT ************************/
u8 DIO_u8ReadPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNum);


/********************** Read a Value(HIGH1/LOW0) of a Group of PINs in a PORT ************************/
u8 DIO_u8ReadGroupValue(u8 Copy_u8PortName);



/********************** OLD FUNCTIONS ************************/
void PIN_DIRECTION(u8 Copy_Port, u8 Copy_PIN, u8 Copy_Direction);

void PORT_DIRECTION(u8 Copy_Port, u8 Copy_Direction);

void PIN_STATE(u8 Copy_Port, u8 Copy_PIN, u8 Copy_State);

void PORT_STATE(u8 Copy_Port, u8 Copy_State);

u8 ReadPIN(u8 Copy_Port, u8 Copy_PIN);

#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
