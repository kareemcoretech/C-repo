/* Write a C function that use the bubble sorting algorithm to
sort an integer array in descending order. */

#include <stdio.h>

void bubblesort(int *ptr, int sizeofarray);

void main()
{
	int number_array[10];
	int sizeofarray = sizeof(number_array)/sizeof(number_array[0]);
	printf("Enter 10 random numbers to sort them in descending order:\n");
	for(int i=0;i<sizeofarray;i++) 
		scanf("%d", &number_array[i]);
	bubblesort(number_array,sizeofarray);
	printf("Your numbers sorted in descending order: \n");
	for(int i=0;i<sizeofarray;i++)
		printf("%d ", number_array[i]);
}

void bubblesort(int *ptr, int sizeofarray)
{
	int temp;
	for(int i=0;i<sizeofarray-1;i++)
	{
		for(int j=0;j<sizeofarray-1-i;j++)
		{
			if(ptr[j]<ptr[j+1]) //if value of index (j) is less than value of index + 1 -> swap
			{
				temp = ptr[j];
				ptr [j] = ptr[j+1];
				ptr[j+1] = temp;
			}
		}
	}
}