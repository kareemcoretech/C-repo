#include<stdio.h>

void main(void)
{
	int arr[5]={1,2,3,4,5};

	for(int i=0;i<5;i++)
	{
		printf("%d \t",arr[i]);
		printf("\n");
		printf("%p \t",arr[i]);
		printf("\n");
		printf("%p \t",arr);
		printf("\n");
		printf("%p \t",&arr[i]);
		printf("\n");
	}
}