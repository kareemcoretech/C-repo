#include<stdio.h>

void scan_array(int arr[],int size);
void sorting_array(int arr[],int size);

void main(void)
{
	int arr[10];
	int size_of_array = sizeof(arr)/sizeof(arr[0]);

	scan_array(arr,size_of_array);
	sorting_array(arr,size_of_array);
}

void scan_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter Number %d \n",i);
		scanf("%d",&arr[i]);
	}
	
}

void sorting_array(int arr[],int size)
{
	int temp;
	printf("Arr Before Sorting\n");
	for(int i=0;i<size;i++)
	{
		printf("%d \n",arr[i]);
	}
	for(int i=0;i<size-1;i++)
	{
		for (int j=0; j<size-1-i;++j)
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
