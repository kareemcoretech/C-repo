/*
 * TIMER_Config.h
 *
 *  Created on: Mar 10, 2023
 *      Author: moham
 */

#ifndef MCAL_TIMER0_TIMER0_CONFIG_H_
#define MCAL_TIMER0_TIMER0_CONFIG_H_

#include "../DIO/DIO_Interface.h"
#include "TIMER0_Private.h"

#define TIMER_MODE 			CTC_MODE
#define TIMER_PRESCALER 	PRESCALER_1024
#define OC0_STATUS			OC0_DISCONNECTED

#define INTERRUPT_STATUS	INTERRUPT_ENABLED

#endif /* MCAL_TIMER0_TIMER0_CONFIG_H_ */
