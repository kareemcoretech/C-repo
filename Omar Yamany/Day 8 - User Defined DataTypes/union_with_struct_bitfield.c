#include<stdio.h>
#include"types.h"

typedef union memory
{
	struct
	{
		u8 b0:1;
		u8 b1:1;
		u8 b2:1;
		u8 b3:1;
		u8 b4:1;
		u8 b5:1;
		u8 b6:1;
		u8 b7:1;
	}bits;
	u8 byt;
} Register;

void main()
{
	Register X;
	X.byt = 20;
	printf("Value of register in decimal: %d", X);
	X.bits.b1=1;
	X.bits.b3=1;
	X.bits.b5=1;
	printf("\nValue of register after changing bits: %d", X);
}