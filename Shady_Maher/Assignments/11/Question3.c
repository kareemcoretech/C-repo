#include <stdio.h>
#include "datatypes.h"

typedef struct
{
	u32 hours;
	u32 minutes;
	u32 seconds;
	
} time ;

void diff(time x1, 
			time x2,
			time *result);

int main()
{
	time x1, x2, result;
	
	printf("Enter the start time.\n");
	printf("Enter hours, minutes and seconds: ");
	scanf("%d %d %d",&x1.hours,
					&x1.minutes,
					&x1.seconds);
	printf("%d:%d:%d \n ",x1.hours,x1.minutes,x1.seconds);
	
	printf("Enter the stop time.\n");
	printf("Enter hours, minutes and seconds: ");
	scanf("%d %d %d",&x2.hours,
					&x2.minutes,
					&x2.seconds);
	
	diff(x1,x2,&result);
	
	printf("Time Difference: %d:%d:%d - ",x1.hours,x1.minutes,x1.seconds);
	printf("%d:%d:%d = ",x2.hours,x2.minutes,x2.seconds);
	printf("%d:%d:%d",result.hours,result.minutes,result.seconds);
}

void diff(time x1, time x2 , time *result)
{
	while (x2.seconds > x1.seconds) 
	{
		--x1.minutes;
		x1.seconds += 60;
	}

	result->seconds = x1.seconds - x2.seconds;

	while (x2.minutes > x1.minutes) 
	{
		--x1.hours;
		x1.minutes += 60;
	}
	result->minutes = x1.minutes - x2.minutes;
	result->hours = x1.hours - x2.hours;
}