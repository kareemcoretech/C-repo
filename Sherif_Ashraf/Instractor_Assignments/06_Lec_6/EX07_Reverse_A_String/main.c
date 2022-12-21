/* 

Author 				:		"Sherif_Ashraf"

Date                :		"19-12-2022"

Version             :		"v-1.0"

Program Description :		"Write a function to reverse a string passed to it"

*/

#include<stdio.h>

void revesreString(char arr[] , int size); // initialize of function


void main(void)
{
	char arr[10]; // initialize array
	int size = sizeof(arr) / sizeof(arr[0]); // get size of the array
	printf("Enter String \n");
	scanf("%s",arr);
	printf("String Before Reverse : %s \n",arr);

	revesreString(arr,size); // call function and pass its paramter
}


void revesreString(char arr[] , int size) // implemantation of function
{
	int first_pivot = 0; // to point the first element index of array 
	int last_pivot = size-1; // to point the last element index of array
	int temp_pivot = 0; // temp value use to store value when swapping

	while(first_pivot < last_pivot) // loop until first_pivot be less than last_pivot
	{
		// swapping 
		temp_pivot = arr[first_pivot]; // assign the arr[first_pivot] (arr[0]) value in temp_pivot variable 
		arr[first_pivot] = arr[last_pivot]; // assign the arr[last_pivot] (arr[size of array -1]) value in arr[first_pivot] (arr[0])
		arr[last_pivot] = temp_pivot; // assign temp_pivot value in arr[last_pivot] (arr[size - 1])
		first_pivot++; // increment it by 1 to reach the next indix 0,1,2,3....
		last_pivot--; // decrement it by 1 to reach the pre indix size-1,size-2,size-3....
	}
	// loop to print the array after reverse it
	printf("String After Reverse : ");
	for(int i = 0;i<size;i++)
	{
		printf("%c",arr[i]);
	}
}