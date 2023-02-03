#include <stdio.h>

int main()
{
	float x, y, sum;
	char op;
	printf("Enter first number: ");
	scanf("%f", &x);
	printf("Enter second number: ");
	scanf("%f", &y);
	printf("Enter operator (+,-,*,/): ");
	scanf(" %c", &op);
	
	switch(op)
	{
		case '+':
		sum = x+y;
		printf("Sum = %f", sum);
		break;
		case '-':
		sum = x-y;
		printf("Subtract = %f", sum);
		break;
		case '*':
		sum = x*y;
		printf("Multiply = %f", sum);
		break;
		case '/':
		sum = x/y;
		printf("Division = %f", sum);
		break;
		default:
		printf("Enter valid operator");
		break;
	}
	

	
}