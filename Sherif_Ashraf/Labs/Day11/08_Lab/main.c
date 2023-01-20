#include<stdio.h>
#include<stdlib.h>

void main(void)
{

		int size;
		printf("enter size\n");
		scanf("%d",&size);
		int *ptr = (int*)calloc(size,sizeof(int));

		for(int i=0;i<size;i++)
		{
			printf("enter elment number %d:",i);
			scanf("%d",&ptr[i]);
		}
		printf("\n\n\n");
		for(int i=0;i<size;i++)
		{
			printf("%d\n",ptr[i]);
		}
		free(ptr);
		printf("\n\n\n");
		for(int i=0;i<size;i++)
		{
			printf("%d\n",ptr[i]);
		}
				for(int i=0;i<size;i++)
		{
			printf("enter elment number %d:",i);
			scanf("%d",&ptr[i]);
		}
		printf("\n\n\n");
		for(int i=0;i<size;i++)
		{
			printf("%d\n",ptr[i]);
		}


}