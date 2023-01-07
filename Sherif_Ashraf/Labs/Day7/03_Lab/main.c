#include<stdio.h>


void func(int *arr,int size);

void main(void)
{
	int arr[5] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	func(arr,size);

}

void func(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}