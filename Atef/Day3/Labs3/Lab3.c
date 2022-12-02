#include<stdio.h>

int main()
{
	int sum,x;
	float avg ;
	printf("please enter first number\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&x);
		sum+=x;
	}
	avg=(float)sum / 10;
	printf("the sum = %d\n",sum);
	printf("the average = %f\n",avg);
}