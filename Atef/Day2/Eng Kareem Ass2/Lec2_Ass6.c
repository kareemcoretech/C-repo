#include<stdio.h>
int main()
{
	int temp;
	printf("Please enter the temperature\n");
	scanf("%d",&temp);
	if(0<temp&&temp<=30)
	{
		printf("heating time = 7 mins");
	}
	else if(30 < temp&&temp <= 60)
	{
		printf("heating time = 5 mins");
	}
	else if(60<temp&&temp<=90)
	{
		printf("heating time = 3 mins");
	}
	else if(90<temp&&temp<=100)
	{
		printf("heating time = 1 mins");
	}
	else if(100<temp)
	{
		printf("Invalid input");
	}
	else 
	{
		printf("Error");
	}
}