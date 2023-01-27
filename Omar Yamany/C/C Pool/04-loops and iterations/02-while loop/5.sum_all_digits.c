#include<stdio.h>
void main()
{
	int number, sum=0;
	
	printf("Enter any number to find sum of it's digits: ");
	scanf("%d", &number);
	
	while(number>0)
	{
		sum += number%10;
		number /= 10;
	}
	printf("Sum of digits = %d", sum);
}