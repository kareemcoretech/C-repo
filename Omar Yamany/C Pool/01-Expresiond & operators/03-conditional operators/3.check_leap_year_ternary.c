#include <stdio.h>

void main()
{
	int year;
	printf("Enter any year: ");
	scanf("%d", &year);
	(year%4)?printf("Common year"):printf("Leap year");
}