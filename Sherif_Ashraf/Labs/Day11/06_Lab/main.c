#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	
	int *ptr = (int*)calloc(5,sizeof(int));

	for(int i=0;i<5;i++)
	{
		printf("enter elment number %d:",i);
		scanf("%d",&ptr[i]);
	}
	printf("\n\n\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",ptr[i]);
	}

	realloc(ptr,6*sizeof(int));

	for(int i=0;i<6;i++)
	{
		printf("enter elment number %d:",i);
		scanf("%d",&ptr[i]);
	}
	printf("\n\n\n");
	for(int i=0;i<6;i++)
	{
		printf("%d\n",ptr[i]);
	}

}