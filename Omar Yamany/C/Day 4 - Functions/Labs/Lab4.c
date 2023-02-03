#include <stdio.h>

int facto(int x);

int main()
{
	int num, fact;
	printf("Enter number to get factorial: ");
	scanf("%d", &num);
	
	fact = facto(num);
	printf("result = %d", fact);
}

int facto(int x)
{
	if(x==0)
	{
		return 1;
	}
	else
	{
		return x*facto(x-1);
	}
}


