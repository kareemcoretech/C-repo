/*
 * main.c
 *
 *  Created on: Jan 28, 2023
 *      Author: Mohamed Ahmed Abdullah
 */

/* HAL Files */
#include "../HAL/KPD/KPD_Interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/SEVEN_SEGMENT/SS_Interface.h"

/* MCAL Files */
#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/EXTI/EXTI_Interface.h"
#include "../MCAL/ADC/ADC_Interface.h"

/* Services Files */
#include "../Services/BIT_OP.h"
#include "../Services/STD_TYPES.h"
#include "../Services/MCU_Private.h"

#include <util/delay.h>

#define F_CPU 80000000UL

u8 global_u8LedCNT = 0;

void main_vHalInit(void);
void main_vMcalInit(void);

void LED_ON() {
	global_u8LedCNT++;
	if(global_u8LedCNT == 62){
		TOGGLE_BIT(PORTA_REG,PIN0);
		global_u8LedCNT = 0;
	}
}

int main(void){
	// Enable interrupts
	SET_BIT(STATUS_REG,7);

	main_vMcalInit();
	main_vHalInit();

	TIMER0_vSetCompareValue(200);
	TIMER0_InterruptHandler(*LED_ON);

	DIO_vSetPinDirection(PORTA,PIN0,OUTPUT);
	DIO_vSetPinState(PORTA,PIN0,LOW);

	while(1){
	}

	return 0;

}

void main_vHalInit(){
	SS_vInit();
	LCD_vInit();
	KPD_vInit();
}

void  main_vMcalInit(){
	ADC_vInit();
	TIMER0_vInit();
}
