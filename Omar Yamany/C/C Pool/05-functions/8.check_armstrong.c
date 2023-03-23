#include<stdio.h>

int check_armstrong(int n);
void main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	if(check_armstrong(number))
		printf("%d is an armstrong number", number);
	else
		printf("%d is not an armstrong number", number);
}

int check_armstrong(int n)
{
	int digit, sum=0, temp, number_of_digits=0;
	int initial_number=n;
	while(n!=0)
	{
		n /= 10;
		number_of_digits++;
	}
	n=initial_number;
	while(n>=10)
	{
		digit = n%10;
		temp = 1;
		for(int i=0;i<number_of_digits;i++)
		{
			temp *= digit;
		}
		sum += temp;
		n /= 10;
	}
	temp =1;
	for(int i=0;i<number_of_digits;i++)
	{
		temp *= n;
	}
	sum += temp;
	if(sum==initial_number)
		return 1;
	else
		return 0;
}