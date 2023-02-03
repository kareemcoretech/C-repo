#include <stdio.h>
void Bubble_sort( int *ptr[] , int size);

int main()
{
	int array[5]={3,5,2,9,1};
	int size = sizeof(array)/sizeof(array[0]);
	
	int *ptr[5]={&array[0],&array[1]
				,&array[2],&array[3],&array[4]};
	
	for (int i=0 ; i<size ; i++)
	{
		printf("%d", *ptr[i]);
	}
	
	Bubble_sort(ptr, size);
	
	
}

void Bubble_sort(int *ptr[] , int size)
{
	int temp;
	for ( int i = 0 ; i < size-1 ; i++ )
	{
		for( int j = 0  ; j < size-1-i ; j++ )
		{
			if (*ptr[j]>*ptr[j+1])
			{
			temp = *ptr[j];
			*ptr[j] = *ptr[j+1];
			*ptr[j+1] = temp;
			}
		}
	}
	printf("\n");

	printf("the max is: %d", *ptr[size-1]);
	
}