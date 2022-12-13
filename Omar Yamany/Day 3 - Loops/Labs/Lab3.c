#include <stdio.h>

int main()
{
	int n, sum=0;
	float average;
	
	printf("Enter 10 numbers:\n");
	for(int i=1;i<=10;i++)
	{
		printf("Number %d: ", i);
		scanf("%d", &n);
		sum +=n;
	}
	
	printf("The sum of 10 numbers are: %d\n", sum);
	average = sum/10;
	printf("The average of 10 numbers are: %f", average);
}