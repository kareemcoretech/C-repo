#include <stdio.h>

int main()
{
	int temperature,time_remain;
	
	printf("Enter The Temperature Of Water \n");
	scanf("%d",&temperature);

	if(temperature >= 0 && temperature <= 30)
	{
		time_remain = 7;
		printf("Time Remain Is : %d Mins",time_remain);
	}
	else if(temperature > 30 && temperature <= 60)
	{
		time_remain = 5;
		printf("Time Remain Is : %d Mins",time_remain);
	}
	else if(temperature > 60 && temperature <= 90)
	{
		time_remain = 3;
		printf("Time Remain Is : %d Mins",time_remain);
	}
	else if(temperature > 90 && temperature <= 100)
	{
		time_remain = 1;
		printf("Time Remain Is : %d Mins",time_remain);
	}
	else
		printf("Invalid Input Must Be In This Range [0 - 100]");	
}