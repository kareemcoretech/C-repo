#include<stdio.h>
void main()
{
	float n1,n2;
	char operator;
	printf("Enter an operator (+,-,*,/)");
	scanf(" %c", &operator);
	printf("Enter two numbers: \n");
	scanf("%f %f", &n1, &n2);
	switch(operator)
	{
		case '+':
		printf("%.1f + %.1f = %.1f", n1, n2, n1+n2);
		break;
		
		case '-':
		printf("%.1f - %.1f = %.1f", n1, n2, n1-n2);
		break;
		
		case '*':
		printf("%.1f x %.1f = %.1f", n1, n2, n1*n2);
		break;
		
		case '/':
		printf("%.1f / %.1f = %.1f", n1, n2, n1/n2);
		break;
	}
}