#include<stdio.h>

void reverse_number(int number, int *ptr);

void main()
{
	int number, reversed=0;
	printf("Enter a number: ");
	scanf("%d", &number);
	reverse_number(number, &reversed);
	printf("Reverse of %d is: %d", number, reversed);
}


void reverse_number(int n, int *ptr)
{
	int reminder = n%10;
	*ptr *= 10;
	*ptr += reminder;
	if(n>=10)
	{
		reverse_number(n/10, ptr);
	}
	
}