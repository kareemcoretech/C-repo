#include<stdio.h>
#include<stdlib.h>
#include"types.h"
void main()
{
	u8 *ptr = (u8*)malloc(10*sizeof(u8));
	for(u8 z=0;z<10;z++)
	{
		ptr[z] = 20+z;
	}
	printf("value of array before free: \n");
	for(u8 z=0;z<10;z++)
	{
		printf("%d ", ptr[z]);
	}
	free(ptr);
	printf("\nvalue of array after free: \n");
	for(u8 z=0;z<10;z++)
	{
		printf("%d ", ptr[z]);
	}
}