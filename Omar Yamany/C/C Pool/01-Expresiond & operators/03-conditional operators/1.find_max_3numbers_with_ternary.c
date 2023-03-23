#include <stdio.h>

void main()
{
	int n1, n2, n3, max;
	printf("Enter number1: ");
	scanf("%d", &n1);
	printf("Enter number2: ");
	scanf("%d", &n2);
	printf("Enter number3: ");
	scanf("%d", &n3);
	
	max = (n1>n2 && n1>n3) ? n1 : (n2>n3) ? n2 : n3;
	
	printf("Max between %d, %d, and %d = %d", n1, n2 , n3, max);
}