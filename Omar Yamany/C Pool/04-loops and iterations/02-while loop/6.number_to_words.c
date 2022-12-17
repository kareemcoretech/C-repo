#include<stdio.h>

void main()
{
	int number, n=0;
	printf("Enter any number to print in words: ");
	scanf("%d", &number);
	
	//store inverse of number in n
	while (number>0)
	{
		n = (n*10) + number%10;
		number /= 10;
	}
		
	//print in inverse
	while(n>0)
	{
		switch(n%10)
		{
			case 0:
			printf("Zero ");
			break;
			case 1:
			printf("One ");
			break;
			case 2:
			printf("Two ");
			break;
			case 3:
			printf("Three ");
			break;
			case 4:
			printf("Four ");
			break;
			case 5:
			printf("Five ");
			break;
			case 6:
			printf("Six ");
			break;
			case 7:
			printf("Seven ");
			break;
			case 8:
			printf("Eight ");
			break;
			case 9:
			printf("Nine ");
			break;
		}
		n /= 10;
	}
}