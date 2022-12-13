#include <stdio.h>

int x, y, result;
float resultF;
void Add(int x, int y);
void Sub(int x, int y);
void Mult(int x, int y);
void Div(int x, int y);
void And(int x, int y);
void Or(int x, int y);
void Not(int x);
void Xor(int x, int y);
void remain(int x, int y);
void incr(int x);
void decr(int x);

void main()
{
	int opID;
	printf("Enter operation ID: ");
	scanf("%d", &opID);
	
	switch(opID)
	{
		case 1:
		printf("You choosed Add operation!\n");
		printf("Enter first number: ");
		scanf("%d", &x);
		printf("Enter second number: ");
		scanf("%d", &y);
		Add(x,y);
		break;
		
		case 2:
		printf("You choosed Subtraction operation!\n");
		printf("Enter first number: ");
		scanf("%d", &x);
		printf("Enter second number: ");
		scanf("%d", &y);
		Sub(x,y);
		break;
		
		case 3:
		printf("You choosed Multiplication operation!\n");
		printf("Enter first number: ");
		scanf("%d", &x);
		printf("Enter second number: ");
		scanf("%d", &y);
		Mult(x,y);
		break;
		
		case 4:
		printf("You choosed Division operation!\n");
		printf("Enter first number: ");
		scanf("%d", &x);
		printf("Enter second number: ");
		scanf("%d", &y);
		Div(x,y);
		break;
		
		case 5:
		printf("You choosed And operation!\n");
		printf("Enter first number: ");
		scanf("%d", &x);
		printf("Enter second number: ");
		scanf("%d", &y);
		And(x,y);
		break;
		
		case 6:
		printf("You choosed Or operation!\n");
		printf("Enter first number: ");
		scanf("%d", &x);
		printf("Enter second number: ");
		scanf("%d", &y);
		Or(x,y);
		break;
		
		case 7:
		printf("You choosed Not operation!\n");
		printf("Enter number: ");
		scanf("%d", &x);
		Not(x);
		break;
		
		case 8:
		printf("You choosed Xor operation!\n");
		printf("Enter first number: ");
		scanf("%d", &x);
		printf("Enter second number: ");
		scanf("%d", &y);
		Xor(x,y);
		break;
		
		case 9:
		printf("You choosed remainder operation!\n");
		printf("Enter first number: ");
		scanf("%d", &x);
		printf("Enter second number: ");
		scanf("%d", &y);
		remain(x,y);
		break;
		
		case 10:
		printf("You choosed increment operation!\n");
		printf("Enter number: ");
		scanf("%d", &x);
		incr(x);
		break;
		
		case 11:
		printf("You choosed decrement operation!\n");
		printf("Enter number: ");
		scanf("%d", &x);
		decr(x);
		break;
		
		default:
		printf("Enter correct operation ID!\n");
		break;
	}
}

void Add(int x,int y)
{
	result = x+y;
	printf("Your result = %d", result);
}

void Sub(int x,int y)
{
	result = x-y;
	printf("Your result = %d", result);
}

void Mult(int x,int y)
{
	result = x*y;
	printf("Your result = %d", result);
}

void Div(int x,int y)
{
	resultF = x/y;
	printf("Your result = %f", resultF);
}

void And(int x,int y)
{
	result = x&y;
	printf("Your result = %d", result);
}

void Or(int x,int y)
{
	result = x|y;
	printf("Your result = %d", result);
}

void Not(int x)
{
	result = !x;
	printf("Your result = %d", result);
}

void Xor(int x, int y)
{
	result = x^y;
	printf("Your result = %d", result);
}

void remain(int x, int y)
{
	result = x%y;
	printf("Your result = %d", result);
}

void incr(int x)
{
	result = ++x;
	printf("Your result = %d", result);
}

void decr(int x)
{
	result = --x;
	printf("Your result = %d", result);
}