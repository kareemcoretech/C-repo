/* 

Author 				:		"Sherif_Ashraf"

Date                :		"21-12-2022"

Version             :		"v-1.0"

Program Description :		"C Function to read 10 integers into an array from user and 
							 print them in reversing order using pointers"

*/

#include<stdio.h>

void revesreArray(int *arrptr , int size); // initialize of function


void main(void)
{
	int arr[10],*ptr=NULL; // initialize array
	int size = sizeof(arr) / sizeof(arr[0]); // get size of the array

	for(int i=0;i<size;i++) // scan numbers from user
	{
		printf("Enter number %d: \n",i);
		scanf("%d",&arr[i]);
	}

	ptr = arr; // assign ptr with array address

	printf("Array Before Reverse : "); // loop to print the array after reverse it
	for(int i = 0;i<size;i++)
	{
		printf("%d \t",arr[i]);
	}
	printf("\n");
	revesreArray(ptr,size); // call function and pass its paramter
	
	printf("Array After Reverse : "); // loop to print the array after reverse it
	for(int i = 0;i<size;i++)
	{
		printf("%d \t",arr[i]);
	}
}


void revesreArray(int *arrptr,int size) // implemantation of function
{
	int first_pivot = 0; // to point the first element index of array 
	int last_pivot = size-1; // to point the last element index of array
	int temp_pivot = 0; // temp value use to store value when swapping

	while(first_pivot < last_pivot) // loop until first_pivot be less than last_pivot
	{
		// swapping 
		temp_pivot = arrptr[first_pivot]; // assign the arr[first_pivot] (arr[0]) value in temp_pivot variable 
		arrptr[first_pivot] = arrptr[last_pivot]; // assign the arr[last_pivot] (arr[size of array -1]) value in arr[first_pivot] (arr[0])
		arrptr[last_pivot] = temp_pivot; // assign temp_pivot value in arr[last_pivot] (arr[size - 1])
		first_pivot++; // increment it by 1 to reach the next indix 0,1,2,3....
		last_pivot--; // decrement it by 1 to reach the pre indix size-1,size-2,size-3....
	}
}