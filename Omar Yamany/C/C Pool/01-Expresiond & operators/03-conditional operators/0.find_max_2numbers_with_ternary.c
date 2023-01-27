#include <stdio.h>

void main()
{
	int n1, n2;
	printf("Enter number 1 : ");
	scanf("%d", &n1);
	printf("Enter number 2 : ");
	scanf("%d", &n2);
	
	(n1>n2) ? printf("Maximum between %d and %d is %d", n1, n2, n1) : printf("Maximum between %d and %d is %d", n1, n2, n2);
}