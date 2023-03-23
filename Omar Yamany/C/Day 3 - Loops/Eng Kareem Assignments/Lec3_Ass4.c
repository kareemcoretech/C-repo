#include <stdio.h>

int main()
{
	int number, reverse=0, remainder;
	printf("Enter a number to be reversed: ");
	scanf("%d", &number);
	
	for (int i=0;i<number-1;i++)
	{
		remainder = number%10;
		reverse = reverse*10 + remainder;
		number /= 10;
	}
	if(number!=0)
	{
		reverse = reverse*10 + number;
	}
	
	printf("Reversed number = %d", reverse);
}