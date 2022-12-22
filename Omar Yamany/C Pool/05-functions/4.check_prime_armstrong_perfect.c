#include<stdio.h>

int check_prime(int n);
int check_armstrong(int n);
int check_perfect_number(int n);

void main()
{
	int number;
	printf("Enter any number: ");
	scanf("%d", &number);
	if(check_prime(number))
		printf("%d is Prime number.\n", number);
	else
		printf("%d is not a Prime number.n", number);
	
	if(check_armstrong(number))
		printf("%d is Armstrong number.\n", number);
	else
		printf("%d is not Armstrong number.\n", number);
	
	if(check_perfect_number(number))
		printf("%d is Perfect number.\n", number);
	else
		printf("%d is not Perfect number.\n", number);
}

int check_prime(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(i==2)
			return 1;
		else if(n%i==0)
			return 0;
	}
}

int check_armstrong(int n)
{
	int sum=0, digit, number=n;
	while(number>0)
	{
		digit = number%10;
		sum += (digit*digit*digit);
		number /= 10;
	}
	if(sum==n)
		return 1;
	else
		return 0;
}

int check_perfect_number(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum==n)
		return 1;
	else
		return 0;
}