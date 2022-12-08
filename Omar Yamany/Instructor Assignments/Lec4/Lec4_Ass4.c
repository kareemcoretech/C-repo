#include <stdio.h>

int countholes (int a);

void main()
{
	int num, holes;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	holes = countholes(num);
	printf("Number of holes = %d", holes);
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