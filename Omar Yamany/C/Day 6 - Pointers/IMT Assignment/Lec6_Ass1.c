#include<stdio.h>
int bubblesort(int *array, int size);
void main()
{
	int array[10] = {95,48,12,47,56,3,47,11,80,97};
	int sizeofarray = sizeof(array)/sizeof(array[0]);
	bubblesort(array,sizeofarray);
	printf("Array after sorting: \n( ");
	for(int i=0;i<sizeofarray;i++)
		printf("%d ", array[i]);
	printf(")");
}

int bubblesort(int *ptr, int size)
{
	int temp;
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(ptr[j]>ptr[j+1])
			{
				temp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1]=temp;
			}
		}
	}
}