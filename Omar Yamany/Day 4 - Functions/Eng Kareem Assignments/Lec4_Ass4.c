/*
You are designing a poster which prints out numbers with a
unique style applied to each of them. The styling is based on
the number of closed paths or holes present in a giver number.
The number of holes that each of the digits from 0 to 9 have
are equal to the number of closed paths in the digit.
1, 2, 3, 5 and 7 = 0 holes.
0, 4, 6, and 9 = 1 hole.
8 = 2 holes.
*/

#include <stdio.h>
#include "operation.h"


void main()
{
	int num, holes;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	holes = countholes(num);
	printf("Number of holes = %d", holes);
}

