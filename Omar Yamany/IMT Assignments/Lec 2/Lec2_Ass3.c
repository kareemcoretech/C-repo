#include <stdio.h>

int main()
{
	int x, y, z;
	
	printf("Enter number 1: ");
	scanf("%d", &x);
	
	printf("Enter number 2: ");
	scanf("%d", &y);
	
	printf("Enter number 3: ");
	scanf("%d", &z);
	
	if((x>y)&&(x>z))
	{
		printf("Maximum number is %d", x);
	}
	else if((y>x)&&(y>z))
	{
		printf("Maximum number is %d", y);
	}
	else if((z>x)&&(z>y))
	{
		printf("Maximum number is %d", z);
	}
}