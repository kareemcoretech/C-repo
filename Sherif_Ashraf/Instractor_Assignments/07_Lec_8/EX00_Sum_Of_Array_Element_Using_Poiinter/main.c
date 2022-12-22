/* 

Author 				:		"Sherif_Ashraf"

Date                :		"21-12-2022"

Version             :		"v-1.0"

Program Description :		"C Function to compute sum of the array elements using pointers"

*/


#include<stdio.h>


int sumOfArray (int *arrptr,int size);

void main(void)
{
	int arr[10],*ptr=NULL,res=0;
	int size = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<size;i++)
	{
		printf("Enter Number %d :\n",i);
		scanf("%d",&arr[i]);
	}

	ptr = arr;
	res = sumOfArray (ptr,size);
	printf("Sum Of Element = %d",res);

}


int sumOfArray (int *arrptr,int size)
{
	int sum = 0;

	for(int i=0;i<size;i++)
	{
		sum += arrptr[i];
	}

	return sum;
}