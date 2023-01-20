#include <stdio.h>
#include "STD_TYPES.h"

enum Bits{
	Bit0=0,
	Bit1,
	Bit2,
	Bit3,
	Bit4,
	Bit5,
	Bit6,
	Bit7
} Bit;

enum Days{
	Sunday=0,
	Monday,
	Tuesday,
	Wensday,
	Thursday,
	Friday,
	Saturday
};


void main(void){
	enum Bits regis = Bit5;
	
	int x = Bit3;
	
	printf("%d", x);
	printf("%d", regis);
	
}
