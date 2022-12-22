/* write a C function that use the selection sort algorithm to
sort an integer array in ascending order. */

#include <stdio.h>

void selectionsort(int *ptr, int sizeofarray);

void main()
{
	int number_array[6];
	int sizeofarray = sizeof(number_array)/sizeof(number_array[0]);
	printf("Enter 6 random numbers to sort them in ascending order:\n");
	for(int i=0;i<sizeofarray;i++) 
		scanf("%d", &number_array[i]);
	selectionsort(number_array,sizeofarray);
	printf("Your numbers sorted in ascending order: \n");
	for(int i=0;i<sizeofarray;i++)
		printf("%d ", number_array[i]);
}

void selectionsort(int *ptr, int sizeofarray)
{
	int temp, min;
	for(int i=0;i<sizeofarray-1;i++)
	{
		min=i;
		for(int j=i+1;j<sizeofarray;j++)
		{
			//check for smallest value
			if(ptr[j]<ptr[min]) //if value of index (j) is less than value of index (i) -> min = index of smallest value in array
			{
				min = j;
			}
		}
		if(ptr[min]!=0)
		{
			temp = ptr[i];
			ptr [i] = ptr[min];
			ptr[min] = temp;
		}
	}	
}