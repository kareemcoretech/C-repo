#include<stdio.h>

// intialize reverse_array

void reverse_array(void)
{
	// initialize two array
	int arr[5]={0};
	int arr_size,first_pivot,last_pivot,temp_pivot;
	// get size of both of arrays to use in loops
	arr_size = sizeof(arr) / sizeof(arr[0]);

	// loop to scan first array
	for(int i = 0;i<arr_size;i++)
	{
		printf("Enter Element Number : %d \n",i);
		scanf("%d",&arr[i]);
	}

	printf("Array Before Reverse \n");
	// loop to print the array before reverse it
	for(int i=0;i<arr_size;i++)
	{
		printf("%d \t",arr[i]);
	}
	printf("\n");
	// initialize to variable with the first indix in array and the last indix in array
	first_pivot = 0;
	last_pivot = arr_size-1;
	//loop to reverse the array
	while(first_pivot < last_pivot)
	{
		// assign the arr[first_pivot] (arr[0]) value in temp_pivot variable 
		temp_pivot = arr[first_pivot];
		// assign the arr[last_pivot] (arr[size of array -1]) value in arr[first_pivot] (arr[0])
		arr[first_pivot] = arr[last_pivot];
		// assign temp_pivot value in arr[last_pivot] (arr[size - 1])
		arr[last_pivot] = temp_pivot;
		first_pivot++; // increment it by 1 to reach the next indix 0,1,2,3....
		last_pivot--;	// decrement it by 1 to reach the pre indix size-1,size-2,size-3....
	}
	// loop to print the array after reverse it 
	printf("Array After Reverse \n");

	for(int i=0;i<arr_size;i++)
	{
		printf("%d \t",arr[i]);
	}
	printf("\n");
}