#include<stdio.h>
#include"datatypes.h"

void main(void)
{
	u32 x=300;
	u8 y=255;
	f32 f = 1.551;
	f64 d = 11.26522;

	void *ptr = &y;

	printf("%d\n",*(u8*)ptr);
	ptr = &x;
	printf("%d\n",*(u32*)ptr);
	ptr = &f;
	printf("%f\n",*(f32*)ptr);
	ptr = &d;
	printf("%lf\n",*(f64*)ptr);
}