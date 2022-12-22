/* 

Author 				:		"Sherif_Ashraf"

Date                :		"19-12-2022"

Version             :		"v-1.0"

Program Description :		" write a C function that use the selection sort algorithm to
							  sort an integer array in ascending order"

*/

#include<stdio.h>

void selectionSorting(int arr[],int size); // intialize of function
void swap(int *a, int *b); // intialize of function

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

	selectionSorting(arr,size); // call function bubblesorting and pass its paramters
}



void swap(int *a, int *b) // implemantation of function
{
  int temp = *a;  // assign value of pointer a in temp variable
  *a = *b; // assign value of pointer b in value of pointer a
  *b = temp; // assign value of temp variable in value of pointer b 
}

void selectionSorting(int arr[],int size) // implemantation of function
{
	int minIndex; // variable to detarmine min value in array
	for(int i=0;i<size-1;i++) // loop on all element of array
	{
		minIndex = i; // assign it with value of i
		for(int j=i+1;j<size;j++) // loop on all element of array 
		{
			if(arr[j]<arr[minIndex]) // condation to check if second element less than min element or not 
			{
				minIndex = j; // if true assign the new min value in minindex variable
			}
		}

		swap(&arr[minIndex],&arr[i]); // call swap function to swap to element and pass its paramters
	}
	printf("Array After Sorting In Descending Order \n");

	for(int i=0;i<size;i++) // loop on all element of array
	{
		printf("%d \t",arr[i]); //print all element of array after sorting in descending order
	}
	printf("\n"); // print new line
}

