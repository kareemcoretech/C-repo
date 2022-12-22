/* 

Author 				:		"Sherif_Ashraf"

Date                :		"19-12-2022"

Version             :		"v-1.0"

Program Description :		" Write a C function that use the bubble sorting algorithm to
							  sort an integer array in descending order"

*/

#include<stdio.h>

void bubbleSorting(int arr[],int size); // intialize of function

void main(void)
{
	int arr[10]; // initialize arr
	int size = sizeof(arr) / sizeof(arr[0]); // get size of array

	for(int i=0;i<size;i++) // loop on all element of array 
	{
		printf("Enter Number %d:\n",i);
		scanf("%d",&arr[i]); // scan all element of array
	}

	printf("Array Before Sorting In Descending Order \n");

	for(int i=0;i<size;i++) // loop on all element of array
	{
		printf("%d \t",arr[i]); // print all element of array before sorting
	}
	printf("\n"); // print new line

	bubbleSorting(arr,size); // call function bubblesorting and pass its paramters
}

void bubbleSorting(int arr[],int size) // implemantation of function
{
	int temp = 0; // inatialzie temp variable with value = 0
	for(int i=0;i<size-1;i++) // loop on all element of array
	{
		for(int j=0;j<size-1-i;j++) // loop on all element of array execept last element of the last itiration
		{
			if(arr[j]<arr[j+1]) // condation to check if first element less than second element or not 
			{
				temp = arr[j]; // assign first element of array in temp
				arr[j] = arr[j+1]; // assign second element of array in first element of array
				arr[j+1] = temp; // assign temp value in second element of array
			}
		}
	}
	printf("Array After Sorting In Descending Order \n");

	for(int i=0;i<size;i++) // loop on all element of array
	{
		printf("%d \t",arr[i]); //print all element of array after sorting in descending order
	}
	printf("\n"); // print new line
}