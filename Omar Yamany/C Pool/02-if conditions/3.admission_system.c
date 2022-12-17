#include <stdio.h>

void main()
{
	int x,y,z,total;
	printf("Enter degree of course 1: ");
	scanf("%d", &x);
	printf("Enter degree of course 2: ");
	scanf("%d", &y);
	printf("Enter degree of course 3: ");
	scanf("%d", &z);
	total=x+y+z;
	if((total >= 180) || (x>=65 && y>=55 && z>=50) || (x>=65 && total>=140))
		printf("Candidate is eligible for admission");
	else
		printf("Candidate is not eligible for admission");
}