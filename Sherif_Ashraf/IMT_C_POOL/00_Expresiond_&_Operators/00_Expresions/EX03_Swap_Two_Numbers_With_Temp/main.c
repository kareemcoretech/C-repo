#include<stdio.h>

void main(void)
{
	int a,b,temp;
	printf("Enter Two Numbers\n");
	scanf("%d %d",&a,&b);
	printf("Before Swaping \na = %d \nb = %d \n",a,b);

	temp = a;
	a = b;
	b = temp;
	printf("After Swaping \na = %d \nb = %d \n",a,b);
}