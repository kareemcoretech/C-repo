#include <stdio.h>

void Q2 (int arr[], int size);
void swap(int* x, int* y);


int main()
{
	int arr[10]={0};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for (int i=0; i<size ; i++)
	{
		printf("Please enter value %d: ",i);
		scanf("%d", &arr[i]);
	}
	
	Q2 (arr, size);
	
	for (int i = size-1 ; i >= 0 ; i--)
	{
		printf("value %d: %d\n",i,arr[i]);
	}
	
	
	
}

void Q2 (int arr[], int size)
{
	int temp;
	for (int i=0; i<size-1 ; i++)
	{
		for(int j=0; j<size-i-1 ; j++)
		{
			if (arr[j] > arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}


void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}