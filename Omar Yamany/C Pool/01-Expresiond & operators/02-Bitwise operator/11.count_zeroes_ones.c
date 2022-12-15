#include <stdio.h>
#define SIZE_INT sizeof(int)*8

void main()
{
	int number, n_of_zeroes=0, n_of_ones=0;
	printf("Enter any number: ");
	scanf("%d", &number);
	
	for(int i=0;i<SIZE_INT;i++)
	{
		if(number&(1<<i))
			n_of_ones++;
		else
			n_of_zeroes++;
	}
	printf("Total of zero bits is: %d\n", n_of_zeroes);
	printf("Total of one bits is: %d", n_of_ones);
}