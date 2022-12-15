#include <stdio.h>

int main()
{
	printf("Enter 2 numbers:\n");
	int x, y, sum, sub, and, or, xor;
	scanf("%d %d", &x, &y);
	sum=x+y;
	sub=x-y;
	and=x&y;
	or=x|y;
	xor=x^y;
	printf("Sum = %d\n Sub = %d\n And = %d\n Or = %d\n Xor = %d\n", sum, sub, and, or, xor);
	
}