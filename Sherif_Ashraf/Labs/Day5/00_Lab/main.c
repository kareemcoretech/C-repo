#include<stdio.h>

void scan_array(int arr[],int size);
void reverse_array(int arr[],int size);


void main(void)
{
	int arr[10];
	int size_of_array = sizeof(arr)/sizeof(arr[0]);

	scan_array(arr,size_of_array);
	reverse_array(arr,size_of_array);
}

void scan_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter Number %d \n",i);
		scanf("%d",&arr[i]);
	}
	
}

void reverse_array(int arr[],int size)
{
	printf("Array Reversed \n");
	for(int i=size-1;i>=0;i--)
	{	
		printf("%d \n",arr[i]);
	}
}