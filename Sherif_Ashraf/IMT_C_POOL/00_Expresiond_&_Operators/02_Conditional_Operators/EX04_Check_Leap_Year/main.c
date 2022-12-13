#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int year;
	printf("Enter year: \n");
	scanf("%d",&year);
	(year%4 == 0 && year%100 != 0)?printf("Leap Year"):(year%400 == 0 )?
			printf("Leap Year"):printf("Common Year");
}
