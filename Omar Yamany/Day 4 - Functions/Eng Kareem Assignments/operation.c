#include <stdio.h>

void Get_Cube(int x)
{
	int result = x*x*x;
	printf("Cubed number = %d", result);
}

int Calc(int a, int b, char c)
{
	switch(c)
	{
		case '+':
		return a+b;
		break;
		
		case '-':
		return a-b;
		break;
		
		case '*':
		return a*b;
		break;
		
		case '/':
		return a/b;
		break;
	}
}

void check_prime(int x, int y)
{
	int flag;
	for (int i=x;i<=y;i++)
	{
		if ((i==0) || (i==1))
		{
			printf("Found %d as a prime number in interval\n", i);
			continue;
		}
		for(int j=2;j<=i/2;j++)
		{
			flag=0;
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("Found %d as a prime number!\n", i);
		}
	}
}

int countholes (int a)
{
	int temp, remainder, holes=0;
	while(a!=0)
	{
		remainder = a%10;
		a /= 10;
		if((remainder == 1) || (remainder == 2) || (remainder == 3) || (remainder == 5) || (remainder == 7))
		{
			holes += 0;
		}
		else if((remainder == 0) || (remainder == 4) || (remainder == 6) || (remainder == 9))
		{
			holes += 1;
		}
		else
		{
			holes += 2;
		}
	}
	
	return holes;
}

int checkpower(int a)
{
	if(a%2==0)
	{
		return 1;
	}
	else if(a%3==0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}