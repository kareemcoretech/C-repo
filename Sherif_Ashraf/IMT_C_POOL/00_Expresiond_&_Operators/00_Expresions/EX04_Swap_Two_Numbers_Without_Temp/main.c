#include<stdio.h>

void main(void)
{
	int a,b;
	printf("Enter Two Numbers\n");
	scanf("%d %d",&a,&b);
	printf("Before Swaping \na = %d \nb = %d \n",a,b);

	a = a+b;
	b = a-b;
	a = a-b;
	printf("After Swaping \na = %d \nb = %d \n",a,b);
}