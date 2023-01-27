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
