#include<stdio.h>
#include<stdlib.h>
#include"types.h"
void main()
{
	u8 *ptr = (u8*)calloc(10,sizeof(u8));
	printf("value of array: \n");
	for(u8 z=0;z<15;z++)
	{
		printf("%d ", ptr[z]);
	}
}