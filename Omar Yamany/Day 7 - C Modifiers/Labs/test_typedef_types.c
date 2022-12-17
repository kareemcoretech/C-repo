#include<stdio.h>
#include"types.h"

void main()
{
	printf("*** char ***\n");
	printf("Size of unsigned char is: %d\n", sizeof(u8));
	printf("Size of signed char is: %d\n", sizeof(s8));

	printf("\n*** int ***\n");
	printf("Size of signed long int is: %d\n", sizeof(s32));
	printf("Size of unsigned long int is: %d\n", sizeof(u32));
	printf("Size of signed short int is: %d\n", sizeof(s16));
	printf("Size of unsigned short int is: %d\n", sizeof(u16));
	
	printf("\n*** float ***\n");
	printf("Size of float is: %d\n", sizeof(f32));
	
	printf("\n*** double ***\n");
	printf("Size of double is: %d\n", sizeof(f64));
	printf("Size of long double is: %d\n", sizeof(f128));
	
}