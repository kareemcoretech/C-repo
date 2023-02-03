#include<stdio.h>
void main()
{
	int sum=0, n;
	float average;
	for(int i=1;i<=10;i++)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &n);
		sum +=n;
	}
	printf("\nSum = %d", sum);
	average = sum/10.0;
	printf("\nAverage = %.2f", average);
}