#include <stdio.h>

int main()
{
	char sign;
	int x,y;
	float result;
	
	printf("Please enter two numbers: ");
	scanf("%d %d", &x, &y);
	printf("Select the operation you want to do (+ or - or * or /): ");
	scanf(" %c", &sign);
	
	switch (sign)
	{
		case '+' :
		result = x+y;
		printf("%f", result);
		break;
		
		case '-' :
		result = x-y;
		printf("%f", result);
		break;
		
		case '*' :
		result = x*y;
		printf("%f", result);
		break;
		
		case '/' :
		result = x/y;
		printf("%f", result);
		break;
		
		
		default: 
		printf("You did not choose a correct operation");
		break;
		
	}
}