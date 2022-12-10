#include<stdio.h>

int main()
{

	int x = 0,sum = 0,avg = 0;
	for(int i = 0; i<=10;i++)
	{
	
	printf("Enter Number \n");
	scanf("%d",&x);
	sum +=x;
	}

	avg = sum / 10;

	printf("sum = %d \n",sum);
	printf("avg = %d \n",avg);

}