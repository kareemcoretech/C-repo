#include<stdio.h>


void swap(int a , int b)
{
	printf("Before Swaping \n");
	printf("a = %d \nb = %d \n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After Swaping \n");
	printf("a = %d \nb = %d",a,b);
}