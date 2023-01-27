/* C Program to print all the array elements and the maximum
number in array using array of pointers. */

#include <stdio.h>

int find_max(int *arr, int size);

void main()
{
	int array[5] = {5,6,7,8,9};
	int sizeofarray = sizeof(array)/sizeof(array[0]);
	int *ptr = array;
	for(int i=0;i<sizeofarray;i++)
	{
		printf("Value %d = %d\n", i+1, *array+i);
	}
	int max = find_max(array, sizeofarray);
	printf("--------------\nMax = %d", max);
}

int find_max(int *arr, int size)
{
	int max = *arr;
	for(int i=0;i<size;i++)
	{
		if(*(arr+i)>max)
			max=*(arr+i);
	}
	return max;
}