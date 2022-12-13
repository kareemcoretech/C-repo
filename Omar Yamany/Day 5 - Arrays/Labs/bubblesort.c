#include <stdio.h>

void sort(int array[],int size);
void swap (int x, int y);


void main()
{
	int array[10] = {9,8,1,4,2,3,8,5,8,11};
	int sizeofarray = sizeof(array)/sizeof(array[0]);
	sort(array, sizeofarray);
}

void sort(int array[], int size)
{
	int temp;
	for(int i=0; i<size-1;i++)
	{
		for(int j=0; j<size-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp = array[j];
				array[j] = array [j+1];
				array[j+1] = temp;
			}
		}
	}
	
	for(int i=0; i<size ; i++)
	{
		printf("%d\n", array[i]);
	}
}


void swap (int x, int y)
{
	int temp = x;
	x=y;
	y=temp;
	
}


