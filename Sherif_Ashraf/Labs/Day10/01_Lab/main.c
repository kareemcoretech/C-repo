#include<stdio.h>
#include"datatypes.h"



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
	u8 byte;
}Registar;


void main(void)
{
	Registar r;

	r.byte=30;
	printf("byte : %d \n",r.byte);

	r.bits.b0 = 0;
	r.bits.b1 = 1;
	r.bits.b2 = 0;
	r.bits.b3 = 1;
	r.bits.b4 = 0;
	r.bits.b5 = 0;
	r.bits.b6 = 0;
	r.bits.b7 = 0;
	printf("byte : %d \n",r.byte);
}