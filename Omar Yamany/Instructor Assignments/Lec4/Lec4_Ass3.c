#include <stdio.h>

void check_prime(int x, int y);

void main()
{
	//b must be bigger than a for this code to work 
	printf("Enter starting number for the interval: ");
	int a, b;
	scanf("%d", &a);
	printf("Enter ending number for the interval: ");
	scanf("%d", &b);
	
	check_prime(a,b);
}

void check_prime(int x, int y)
{
	for (int i=x;i<=y;i++)
	{
		if ((i==0) || (i==1))
		{
			printf("Found %d as a prime number in interval\n", i);
			continue;
		}
		for(int j=2;j<i/2;j++)
		{
			if(i%j!=0)
			{
				printf("Found %d as a prime number in interval\n", i);
				continue;
			}
		}
	}
}