#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number to get it's multiplication table: ");
	scanf("%d", &n);
	for(int i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d", n, i, n*i);
	}
}