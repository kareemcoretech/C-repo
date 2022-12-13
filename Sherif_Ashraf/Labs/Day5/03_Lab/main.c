#include<stdio.h>

void scan_array(int arr[],int size);
void linear_search(int arr[],int target,int size);

void main(void)
{
	int arr[10];
	int size_of_array = sizeof(arr)/sizeof(arr[0]);
	int target;
	printf("Enter Your Target Number\n");
	scanf("%d",&target);
	scan_array(arr,size_of_array);
	linear_search(arr,target,size_of_array);
}

void scan_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter Number %d \n",i);
		scanf("%d",&arr[i]);
	}
	
}

void linear_search(int arr[],int target,int size)
{
	int flag = 0,counter=0;
	for(int i =0;i<size;i++)
	{
		if(target == arr[i])
		{
			printf("%d Found In Location Number : %d \n",target,i);
			flag = 1;
			counter++;
		}
	}
	if(flag == 0)
	{
		printf("Not Found\n");
	}
	else
	{
		printf("Target Found %d Times\n",counter);	
	}

}