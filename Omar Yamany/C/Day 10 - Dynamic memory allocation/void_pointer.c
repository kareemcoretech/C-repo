#include<stdio.h>
#include "types.h"
void main()
{
	u32 x=300;
	u8 y=255;
	void *ptr = &y;
	printf("Value of Y = %d\n", *(u8*)ptr);
	ptr = &x;
	printf("Value of X = %d\n", *(u32*)ptr);
	f32 z = 25.22;
	f64 c = 19929.12123;
	ptr = &z;
	printf("Value of Z = %.2f\n", *(f32*)ptr);
	ptr = &c;
	printf("Value of C = %.2lf", *(f64*)ptr);
}