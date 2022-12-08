#include <stdio.h>


int Calc(int a, int b, char c);
int flag=0;
void main()
{
	int x, y, result;
	char z;
	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);
	printf("Enter operation code: ");
	scanf(" %c", &z);
	result = Calc(x,y,z);
	if(flag==0)
	{
		printf("Result = %d", result);
	}
}

int Calc(int a, int b, char c)
{
	switch(c)
	{
		case '+':
		return a+b;
		break;
		
		case '-':
		return a-b;
		break;
		
		case '*':
		return a*b;
		break;
		
		case '/':
		return a/b;
		break;

		default:
		printf("Invalid operation code!");
		flag=1;
		break;
	}
}