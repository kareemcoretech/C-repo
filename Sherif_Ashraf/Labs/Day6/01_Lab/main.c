#include<stdio.h>

void scan_array(int arr[],int size);
void sorting_array(int arr[],int size,int arr2[]);
void binary_search(int arr[],int size,int target,int low_pivot,int high_pivot);

void main(void)
{
    int arr[10],sorted_arr[10],target;
	int size_of_array = sizeof(arr)/sizeof(arr[0]);

	printf("Enter Your Target Number \n");
	scanf("%d",&target);
	scan_array(arr,size_of_array);
	sorting_array(arr,size_of_array,sorted_arr);
	binary_search(sorted_arr,size_of_array,target,0,size_of_array-1);
}


void scan_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter Number %d \n",i);
		scanf("%d",&arr[i]);
	}
	
}

void sorting_array(int arr[],int size,int arr2[])
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
	for(int i=0;i<size-1;i++)
	{
		arr2[i]=arr[i];
	}
	printf("Arr After Sorting\n");
	for(int i=0;i<size;i++)
	{
		printf("%d \n",arr[i]);
	}
}


void binary_search(int arr[],int size,int target,int low_pivot,int high_pivot)
{
	int flag = 0;
	while(low_pivot<=high_pivot)
	{

		int mid_pivot = low_pivot + (high_pivot - low_pivot)/2;

		if(arr[mid_pivot] == target)
		{
			printf("Value Found In %d",mid_pivot+1);
			flag = 1;
		}
		if(arr[mid_pivot] < target)
		{
			low_pivot = mid_pivot + 1;
		}
		else
		{
			high_pivot = mid_pivot - 1;
		}
	}

	if(flag == 0)
	{
		printf("Not Found");
	}
}