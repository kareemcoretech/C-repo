#include <stdio.h>

void main()
{
	int number, order;
	printf("Enter any number: ");
	scanf("%d", &number);
	
	for(int i=0;i<32;i++)
	{
		if(number & 1<<i)
		{
			order = i;
		}
	}
	printf("Highest order set bit in %d is %d", number, order);
}
