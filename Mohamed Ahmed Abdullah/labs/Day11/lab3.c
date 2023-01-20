#include <stdio.h>
#include "STD_TYPES.h" // Relative path 

void main(void){
	u32 x = 300;
	u8 y = 255;
	float z = 1.453;
	double c = 4343.4432;

	void *ptr;

	ptr = &y;
	printf("%d \n", *(u8*)ptr);
	
	ptr = &x;
	printf("%d \n", *(u32*)ptr);
	
	ptr = &z;
	printf("%f \n", *(float*)ptr);
	
	ptr = &c;
	printf("%f", *(double*)ptr);
}