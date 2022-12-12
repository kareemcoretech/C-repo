#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &x, &y);
	if(x%y==0)
	{
		printf("First number is multiply of second");
	}
	else
	{
		printf("Second number is not a multiply of second");
	}
}