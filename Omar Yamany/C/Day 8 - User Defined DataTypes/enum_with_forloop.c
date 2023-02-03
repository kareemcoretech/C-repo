#include<stdio.h>

enum Week
{
	Saturday=1,
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday
};

void main()
{
	for(int i=Saturday; i<=Friday;i++)
	{
		printf("%d ", i);
		//printf("%d ", Saturday+i); doesn't work if it doesn't start from 0 (saturday = 1 means 1+1)
	}
}