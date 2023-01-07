#include<stdio.h>
#include"types.h"

typedef union X
{
	u8 x;
	u16 y;
	u32 z;
}byte;

void main()
{
	byte test;
	test.z=10000000;
	test.x=12;
	test.y=55;
	printf("test.x = %d\n", test.x);
	printf("test.y = %d\n", test.y);
	printf("test.z = %d\n", test.z);
	printf("size of union: %d", sizeof(test));
}