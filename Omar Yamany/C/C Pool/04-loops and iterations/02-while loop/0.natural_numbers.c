#include<stdio.h>

void main()
{
	int n, i=1;
	printf("Enter any number: ");
	scanf("%d", &n);
	printf("Natural numbers from 1 to %d:\n", n);
	while(i<=n)
	{
		printf("%d\n", i);
		i++;
	}
}