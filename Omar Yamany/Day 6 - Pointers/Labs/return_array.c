#include<stdio.h>
int *return_array();
void main()
{
	int *p = return_array();
	for(int i=0;i<5;i++)
		printf("%d\n", p[i]);
}

int *return_array()
{
	static int array[5]={1,2,3,4,5};
	return array;
}