#include<stdio.h>
#include<stdlib.h>
#include"types.h"
void main()
{
	while(1)
	{
		u8 size;
		printf("Enter size: ");
		scanf("%d", &size);
		u8 *ptr = (u8*)malloc(size);
		printf("Values inside pointer: ");
		/*for(u8 i=0;i<size;i++)
		{
			printf("%d ", ptr[i]);
		}*/
	
		u8 *ptr2 = (u8*) calloc(size,sizeof(u8));
		for(u8 i=0;i<size;i++)
		{
			printf("%d ", ptr2[i]);
		}
		printf("\n");
	}
}