#include<stdio.h>
int main()
{
	int x;
	printf("Enter the temp:");
	scanf("%d",&x);
	if(x<30)
	{
       printf("The required heating time is 7 mins");
	}
	else if ((x>=30) && (x<60))
	{
		printf("The required heating time is 5 mins");
	}
	else if ((x>=60) && (x<=90) )
	{
		printf("The required heating time is 3 mins");
	}
	else if (x>90)
	{
		printf("The required heating time is 1 mins");
	}
	else if (x>100)
	{
		printf("Invalid Input");
	}
}