#include <stdio.h>

int checkpower(int a);

void main()
{
	int num, output;
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	output = checkpower(num);
	printf ("System returned %d", output);
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