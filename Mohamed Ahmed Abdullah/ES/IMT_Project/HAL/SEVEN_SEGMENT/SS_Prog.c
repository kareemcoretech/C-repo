/*
 * SS_Prog.c
 *
 *  Created on: Feb 4, 2023
 *      Author: moham
 */

#include "SS_Private.h"
#include "SS_Config.h"
#include "SS_Interface.h"

#include "../../MCAL/DIO/DIO_Interface.h"

// Initilize seven segment
void SS_vInit(){
	DIO_vSetPortDirection(SEGMENT_PORT, OUTPUTS);
}

// Display number on seven segment screen
void SS_vDisplayNumber(u8 Copy_u8Number){
	switch(Copy_u8Number){
		case 0:
			DIO_vSetPortState(SEGMENT_PORT, ZERO);
			break;
		case 1:
			DIO_vSetPortState(SEGMENT_PORT, ONE);
			break;
		case 2:
			DIO_vSetPortState(SEGMENT_PORT, TWO);
			break;
		case 3:
			DIO_vSetPortState(SEGMENT_PORT, THREE);
			break;
		case 4:
			DIO_vSetPortState(SEGMENT_PORT, FOUR);
			break;
		case 5:
			DIO_vSetPortState(SEGMENT_PORT, FIVE);
			break;
		case 6:
			DIO_vSetPortState(SEGMENT_PORT, SIX);
			break;
		case 7:
			DIO_vSetPortState(SEGMENT_PORT, SEVEN);
			break;
		case 8:
			DIO_vSetPortState(SEGMENT_PORT, EIGHT);
			break;
		case 9:
			DIO_vSetPortState(SEGMENT_PORT, NINE);
			break;
	}
}
