#include<stdio.h>
void main()
{
	int number;
	int sum=1;
	printf("Enter any number: ");
	scanf("%d", &number);
	printf("1+");
	for(int i=2;i<number;i++)
	{
		printf("1/%d+", i);
		sum += i;
	}
	sum += number;
	printf("1/%d", number);
	printf("\nSum = 1/%d", sum);
}