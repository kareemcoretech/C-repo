#include<stdio.h>

void main(void)
{
	int arr[10]={0},total=0,avrage=0;

	int size_of_array = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size_of_array;i++)
	{
		printf("Enter Number %d \n",i);
		scanf("%d",&arr[i]);
	}

	for(int i=9;i>=0;i--)
	{
		total +=arr[i];
	}
	avrage = total/size_of_array;
	printf("Total = %d \nAvrage = %d",total,avrage);
}