#include <stdio.h>

void sum_array(int *array, int size, int *sum);

void main()
{
	int sum=0;
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	sum_array(arr,size,&sum);
	printf("\nThe result of summation is: %d", sum);
}

void sum_array(int *array, int size, int *sum)
{
	for(int i=0;i<size;i++)
		*sum += array[i];
}