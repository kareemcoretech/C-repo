 #include<stdio.h>
#include"types.h"
typedef struct
{
	u8 Hours;
	u8 Minutes;
	u8 Seconds;
}Time;
void Difference(Time x, Time y);
int main()
{
	Time x;
	Time y;
	printf("Enter the first time period:");
	scanf("%d %d %d",&x.Hours,&x.Minutes,&x.Seconds);
	printf("Enter the second time period:");
	scanf("%d %d %d",&y.Hours,&y.Minutes,&y.Seconds);
	Difference(x,y);
}
void Difference(Time x, Time y)
{
	Time Result;
	Result.Hours=x.Hours-y.Hours;
	Result.Minutes=x.Minutes-y.Minutes;
	Result.Seconds=x.Seconds-y.Seconds;
	printf("The difference is %d:%d:%d",Result.Hours,Result.Minutes,Result.Seconds);
}