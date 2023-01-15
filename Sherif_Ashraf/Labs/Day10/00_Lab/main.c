#include<stdio.h>
#include"datatypes.h"



typedef union car
{
	u8 x;
	u16 y;
	u32 z;
}bmw;


void main(void)
{
	bmw m3;
	m3.x=10;
	m3.y=20;
	m3.z=30;

	printf("x : %d \ny : %d \nz : %d \n",m3.x,m3.y,m3.z);
	printf("%d",sizeof(m3));
}