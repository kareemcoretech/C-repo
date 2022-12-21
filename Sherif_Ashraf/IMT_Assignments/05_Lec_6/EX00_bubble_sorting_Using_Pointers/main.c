#include<stdio.h>

int bubble_sorting(int *arr,int size);

void main(void)
{
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<size;i++)
	{
		printf("Enter Number %d\n:",i);
		scanf("%d",&arr[i]);
	}
	bubble_sorting(arr,size);
}

int bubble_sorting(int *arr,int size)
{
	int temp=0;
	printf("Arr Before Sorting\n");
	for(int i=0;i<size;i++)
	{
		printf("%d \n",arr[i]);
	}

	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("Arr After Sorting\n");
	for(int i=0;i<size;i++)
	{
		printf("%d \n",arr[i]);
	}
}