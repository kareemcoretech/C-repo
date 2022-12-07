#include <stdio.h>

void Get_Cube(int x);


int x, result;

int main()
{
	printf("Enter a number to get it's cube: ");
	scanf("%d", &x);
	Get_Cube(x);
	printf("Result = %d", result);
}

void Get_Cube(int x)
{
	result = x*x*x;
}