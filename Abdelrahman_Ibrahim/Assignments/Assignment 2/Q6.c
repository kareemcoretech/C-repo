#include <stdio.h>

void main(void)
{
	int Temp;
	
	/* Get the user grade */
	printf("Please enter The Temprature: ");
	scanf("%d",&Temp);
	
	if ( Temp < 30 )
	{
		printf ("The Required Time is 7 mins");
	}
	
	else if ( (Temp >= 30 ) && (Temp < 60) )
	{
		printf ("The Required Time is 5 mins");
	}
	
	else if ( (Temp >= 60 ) && (Temp < 90) )
	{
		printf ("The Required Time is 3 mins");
	}
	
	else if ( (Temp >= 90 ) && (Temp <= 100) )
	{
		printf ("The Required Time is 1 mins");
	}
	
	else
	{
		printf ("Invalid input");
	}
}