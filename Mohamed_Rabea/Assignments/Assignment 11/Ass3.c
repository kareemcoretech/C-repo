/*Auth : MOHAMED MOHAMED RABEA 
VER : (V.0.1)
program :(3) C Function to calculate the difference between two time periods using structures.
*/
#include <stdio.h>
#include "types.h"
typedef struct {
	u8 hours;
	u8 minutes;
	u8 seconds;
} Time ;

Time calc (void);

int main()
{   Time Result;
	Result= calc ();
	   printf("The Time Difference is  = %d:%d:%d", Result.hours, Result.minutes,Result.seconds);
	
}

Time calc (void)
{   Time t1,t2,Diff;
	printf("Enter 1'st Hour :");
	scanf ("%d",&t1.hours);
	printf("Enter 1'st minutes :");
	scanf ("%d",&t1.minutes);
	printf("Enter 1'st second :");
	scanf ("%d",&t1.seconds);
	
	printf("Enter 2'nd Hour :");
	scanf ("%d",&t2.hours);
	printf("Enter 2'nd minutes :");
	scanf ("%d",&t2.minutes);
	printf("Enter 2'nd second :");
	scanf ("%d",&t2.seconds);
	
	
	Diff.hours=t1.hours-t2.hours;
	Diff.minutes=t1.minutes-t2.minutes;
	Diff.seconds=t1.seconds-t2.seconds;
	return Diff;
}