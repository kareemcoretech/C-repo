#include <stdio.h>

int main()
{
	int n, result=1;
	printf("Enter an integer: ");
	scanf("%d", &n);
	while(n!=0)
	{
		result = result * n;
		n = n-1;
	}
	printf("Factorial = %d", result);
}