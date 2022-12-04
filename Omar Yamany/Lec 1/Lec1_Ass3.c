#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter number a: ");
	scanf("%d", &a);
	printf("Enter number b: ");
	scanf("%d", &b);
	printf("a + b = %d\n", a+b);
	printf("a - b = %d\n", a-b);
	printf("a & b = %d\n", a&b);
	printf("a | b = %d\n", a|b);
	printf("a ^ b = %d\n", a^b);
}