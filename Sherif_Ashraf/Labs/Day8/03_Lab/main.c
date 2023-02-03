#include<stdio.h>
#include"datatypes.h"

void main(void)
{
	u16 x = 100;
	u8 y = 55;
	f64 z = 5.5;
	f32 s = 6.6656;
	u32 li = 100;
	s16 si = 100;
	f96 ld = 10.002;

	printf("int size = %d\n",sizeof(x));
	printf("char size = %d\n",sizeof(y));
	printf("double size = %d\n",sizeof(z));
	printf("floatn size = %d\n",sizeof(s));
	printf("short int size = %d\n",sizeof(si));
	printf("long int size = %d\n",sizeof(li));
	printf("long double size = %d\n",sizeof(ld));
}