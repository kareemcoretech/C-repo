#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int *ptr = (int*)calloc(10,sizeof(int));

	for(int i=0;i<10;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\n\n\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\n",ptr[i]);
	}
}