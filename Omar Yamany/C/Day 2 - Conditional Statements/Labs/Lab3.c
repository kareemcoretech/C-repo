#include <stdio.h>

int main()
{
	int x;
	printf("Enter your grade: ");
	scanf("%d", &x);
	if((x>=0)&&(x<50))
	{
		printf("Failed");
	}
	else if((x>=50)&&(x<65))
	{
		printf("Normal");
	}
	else if((x>=65)&&(x<75))
	{
		printf("Good");
	}
	else if((x>=75)&&(x<85))
	{
		printf("Very Good");
	}
	else if(x>=85)
	{
		printf("Excellent");
	}
	else
	{
		printf("Enter valid number");
	}
}