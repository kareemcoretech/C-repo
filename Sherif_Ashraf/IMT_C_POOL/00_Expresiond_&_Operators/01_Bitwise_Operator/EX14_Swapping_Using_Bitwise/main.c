#include<stdio.h>

void main(void)
{
	int num1,num2;
	printf("Enter Two Numbers\n");
	scanf("%d %d",&num1,&num2);

	printf("Before Swapping \nNum1 = %d \nNum2 = %d \n",num1,num2);

	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;

	printf("After Swapping \nNum1 = %d \nNum2 = %d \n",num1,num2);
}