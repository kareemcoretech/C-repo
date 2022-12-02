#include <stdio.h>


int main()
{
	int x ;
	printf("please enter your Marks\n");
	scanf("%d",&x);
	if(x<0 || x > 100)
	{
		printf("Error\n");
	}
	else if (x <50)
	{
		printf("Fialed\n");
	}
	else if (x <65)
	{
		printf("Normal\n");
	}
	else if (x < 75)
	{
		printf("Good\n");
	}
	else if ( x  < 85)
	{
		printf("Very Good\n");
	}
	else if (85 <= x)
	{
		printf("Excellent\n");
	}
	
}