/* 

Author 				:		"Sherif_Ashraf"

Date                :		"21-12-2022"

Version             :		"v-1.0"

Program Description :		"C function to get the value of the smallest element in array
                             using pointers"

*/


#include<stdio.h>

int smallestOfArray(int *arrptr,int size); // intialize function

void main(void)
{
	int arr[10],*ptr=arr,res=0;
	int size = sizeof(arr) / sizeof(arr[0]);

	for(int i=0;i<size;i++) // loop until size of array and scan elements
	{
		printf("enter number %d: \n",i+1);
		scanf("%d",&arr[i]);
	}

	res = smallestOfArray(ptr,size); // call function and pass address of array and its size

	printf("Smallest Number = %d",res); // print the smallest element

}

int smallestOfArray(int *arrptr,int size)// function implemntation
{
	int smallest = arrptr[0]; //assign smallest with the first element in the array;

	for(int i=0;i<size;i++) // loop until size of array
	{
		if(smallest>arrptr[i]) // check if array element is smaller than smallest or not  
		{
			smallest = arrptr[i]; // if true then assign the element in the smallest 
		}
	}

	return smallest;
}