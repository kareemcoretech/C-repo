#include <stdio.h>
#include <math.h>
void main()
{
	int n1, n2, result;
	printf("Enter base: ");
	scanf("%d", &n1);
	printf("Enter exponent: ");
	scanf("%d", &n2);
	result = pow(n1, n2);
	printf("5 ^ 3 = %d", result);
	
	
}	
