#include<stdio.h>
void main()
{
	printf("Enter any number to check even or odd: ");
	int number;
	scanf("%d", &number);
	switch(number%2==0)
	{
		case 1:
		printf("Number is even!");
		break;
		
		case 0:
		printf("Number is odd!");
		break;
	}
}