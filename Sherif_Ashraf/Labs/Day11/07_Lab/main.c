#include<stdio.h>
#include<stdlib.h>

void main(void)
{
		int size ;
		printf("enter size\n");
		scanf("%d",&size);
		int *ptr = (int*)calloc(size,sizeof(int));

		for(int i=0;i<size;i++)
		{
			printf("enter elment number %d:",i);
			scanf("%d",&ptr[i]);
		}
		printf("before sorting \n");
		for(int i=0;i<size;i++)
		{
			printf("%d \t",ptr[i]);
		}
		printf("\n");

		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size-i-1;j++)
			{
				if(ptr[j]>ptr[j+1])
				{
					int temp;
					temp = ptr[j];
					ptr[j] = ptr[j+1];
					ptr[j+1] = temp;
				}
			}
		}

		printf("after sorting \n");
		for(int i=0;i<size;i++)
		{
			printf("%d \t",ptr[i]);
		}
}