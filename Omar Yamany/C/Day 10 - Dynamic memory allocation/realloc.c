#include<stdio.h>
#include<stdlib.h>
#include"types.h"

void main()
{
	u8 *ptr = (u8*)malloc(10*sizeof(u8));
	realloc(ptr,20*sizeof(u8));
	
	for(u8 i=0;i<25;i++)
	{
		scanf("%d ", ptr[i]);
	}
}