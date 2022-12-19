#include<stdio.h>

void input_array(int *ptr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter value %d : ", i+1);
		scanf("%d", &ptr[i]);
	}
}

void output_array(int *ptr, int size)
{
	for(int i=0;i<size;i++)
		printf("Value %d : %d\n", i+1, ptr[i]);
}