#include<stdio.h>

void func1(int *ptr, int size);
void func2(int ptr[], int size);

void main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,0};
	int size = sizeof(array)/sizeof(array[0]);
	//int *ptr = &array[0];
	int *ptr = array;
	for(int i=1;i<=size;i++)
		printf("\n%d", ptr[i-1]);
}

//function to pass array and return it
void func1(int *ptr, int size)
{
	int n=11;
	for(int i=1;i<=size;i++,n++)
		ptr[i-1]=n;
}

//function to pass array and return it
void func2(int ptr[], int size)
{
	int n=11;
	for(int i=1;i<=size;i++,n++)
		ptr[i-1]=n;
}