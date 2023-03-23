/*
 * EXTI_Private.h
 *
 *  Created on: Feb 18, 2023
 *      Author: moham
 */

#ifndef MCAL_EXTI_EXTI_PRIVATE_H_
#define MCAL_EXTI_EXTI_PRIVATE_H_

#define GICR_REG 	*((volatile u8*) 0x5B)
#define GIFR_REG 	*((volatile u8*) 0x5A)
#define MCUCR_REG 	*((volatile u8*) 0x55)
#define MCUCSR_REG 	*((volatile u8*) 0x54)

#endif /* MCAL_EXTI_EXTI_PRIVATE_H_ */
