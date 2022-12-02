#include<stdio.h>
int main ()
{
    float temp ;   
	printf("Enter the heater temp :");
	scanf("%f",&temp);
	if (0<=temp&&temp<=30)
	{
		printf("the required heating time = 7 mins");
	}
	else if (30<=temp&&temp<=60)
	{
		printf("the required heating time = 5 mins");
	}
	else if (60<=temp&&temp<=90)
	{
		printf("the required heating time = 3 mins");
	}
	else if (90<=temp&&temp<=100)
	{
		printf("the required heating time = 1 mins");
	}
	else if (temp>=100)
	{
		printf("Invalid input");
	}
	else
		printf("ERROR");
	
}