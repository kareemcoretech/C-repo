#include<stdio.h>
#include<stdlib.h>
#include"types.h"
void main()
{
	u8 *ptr = (u8*)malloc(10*sizeof(u8));
	/*printf("%d\n", &ptr);
	printf("Enter 10 values: \n");
	for(u8 i=0;i<10;i++)
	{
		scanf("%d", &ptr[i]);
	}*/
	printf("Address of array: \n");
	for(u8 z=0;z<15;z++)
	{
		printf("%d ", ptr[z]);
	}
}