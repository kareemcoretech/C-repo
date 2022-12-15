#include <stdio.h>

int main()
{
	while(1)
	{
		int x,y;
		printf("Please enter first number: ");
		scanf("%d", &x);
		printf("Please enter second number: ");
		scanf("%d", &y);
		printf("The result is: %d\n", x+y);
	}
}