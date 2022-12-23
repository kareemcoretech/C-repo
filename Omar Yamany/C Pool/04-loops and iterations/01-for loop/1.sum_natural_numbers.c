#include<stdio.h>
void main()
{
	int sum=0;
	for(int i=1;i<=10;i++)
	{
		printf("%d  ", i);
		sum +=i;
	}
	printf("\nSum = %d", sum);
}