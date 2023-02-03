//trailing zeroes is the number of 0 bits before first set bit (1)
//so it will be the same as example 7
#include <stdio.h>

void main()
{
	int number, order, flag=0;
	printf("Enter any number: ");
	scanf("%d", &number);
	while(flag==0)
	{
		for(int i=0;i<31;i++)
		{
			if(number & 1<<i)
			{
				order=i;
				flag=1;
				break;
			}
		}
	}
	printf("Lowest order set bit in %d is %d", number, order);
}
