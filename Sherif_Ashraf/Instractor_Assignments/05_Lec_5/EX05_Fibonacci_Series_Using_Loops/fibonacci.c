#include<stdio.h>

// implemantation of fibonacci function

void fibonacci(int num)
{	
	int next,first=0,last=1;
	// next value will equal first(next-2) + second(next-1)
	next = first + last;
	printf("%d,%d,%d",first,last,next);
	// loop until next be smaller than or equal to the number
	while(next<=num)
	{
		// assign value of last in first
		first = last;
		// assign value of next in last
		last = next;
		// then get next first(next-2) + second(next-1)
		next = first + last;
		printf(",%d",next);
	}
}