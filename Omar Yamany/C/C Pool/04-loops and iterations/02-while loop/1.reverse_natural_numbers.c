#include<stdio.h>

void main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d", &n);
	printf("Natural numbers from %d to 1:\n", n);
	while(n>0)
	{
		printf("%d\n", n);
		n--;
	}
}