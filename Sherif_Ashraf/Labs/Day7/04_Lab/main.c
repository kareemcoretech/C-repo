#include<stdio.h>


void main(void)
{
	int arr[5] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int *ptr = arr;
	
	for(int i = 0 ;i<size;i++)
	{
		printf("%d\n",ptr[i]);
	}

}