/* C Function to read 10 integers into an array from user and
print them in reversing order using pointers. */

#include<stdio.h>
#include"arrayio.h"

void print_array_reverse(int *ptr, int size);

void main()
{
	int array[10];
	int sizeofarray = sizeof(array)/sizeof(array[0]);
	input_array(array,sizeofarray); //from arrayio library
	print_array_reverse(array,sizeofarray);
}

void print_array_reverse(int *ptr, int size)
{
	printf("Array you entered in reversed order is: \n");
	for(int i=size-1;i>=0;i--)
		printf("%d ", ptr[i]);
}