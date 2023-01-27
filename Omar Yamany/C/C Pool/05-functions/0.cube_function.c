#include<stdio.h>

int Get_Cube(int n);

void main()
{
	int number, cubed;
	printf("Enter any number: ");
	scanf("%d", &number);
	cubed = Get_Cube(number);
	printf("Cube of %d is %d", number, cubed);
}

int Get_Cube(int n)
{
	int result;
	result = n*n*n;
	return result;
}