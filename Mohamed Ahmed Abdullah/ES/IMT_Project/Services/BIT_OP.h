/*
 * BIT_OP.h
 *
 *  Created on: Jan 28, 2023
 *      Author: Mohmaed Ahmed Abdullah
 */

#ifndef BIT_OP_H_
#define BIT_OP_H_

#define SET_BIT(r,b) r|=(1<<b)

#define CLR_BIT(r,b) r&=(~(1<<b))

#define GET_BIT(r,b) ((r>>b)&1)

#define TOGGLE_BIT(r,b) r ^= (1 << b)

#endif
