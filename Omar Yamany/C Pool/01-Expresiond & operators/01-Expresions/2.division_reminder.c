#include <stdio.h>

void main()
{
	int n1, n2;
	printf("Enter number 1: ");
	scanf("%d", &n1);
	printf("Enter number 2:");
	scanf("%d", &n2);
	
	printf("Their division = %d\n", n1/n2);
	printf("Their reminder = %d", n1%n2);
}