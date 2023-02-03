#include<stdio.h>

int size;

int *func(void);


void main(void)
{
	int *arrptr;
	arrptr = func();

	for(int i=0;i<size;i++)
	{
		printf("%d\n",arrptr[i]);
	} 
}

int *func(void)
{
	static int arr[5]={1,2,3,4,5};

	size = sizeof(arr) / sizeof(arr[0]);

	return arr;
}