#include <stdio.h>

int Get_Max(int x, int y);

int main()
{
	int n1, n2, max;
	printf("Please enter value 1: ");
	scanf("%d", &n1);
	printf("Please enter value 2: ");
	scanf("%d", &n2);
	
	max = Get_Max(n1, n2);
	printf("The Maximum value is: %d", max);
}

int Get_Max(int x, int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}