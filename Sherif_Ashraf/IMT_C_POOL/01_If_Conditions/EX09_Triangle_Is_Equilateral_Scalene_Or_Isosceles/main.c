#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int fside,sside,tside;
	printf("Enter First Side :");
	scanf("%d",&fside);
	printf("Enter Second Side :");
	scanf("%d",&sside);
	printf("Enter Third Side :");
	scanf("%d",&tside);
	if((fside == sside) && (fside == tside))
		printf("Triangle Is Equilateral Triangle \n");
	else if((fside == sside) || (fside==tside) || (sside==tside))
		printf("Triangle Is Isosceles Triangle \n");
	else
		printf("Triangle Is  Scalene Triangle \n");
}
