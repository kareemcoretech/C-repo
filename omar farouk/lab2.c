#include<stdio.h>
int main()
{
	int  n,sum=0; 
	float average ;
	printf("enter 10 numbers:\n");
	
	for(int i=1;i<=10;i++) 
	{
		printf("number %d: ", i);
		scanf("%d" ,&n );
		sum+=n ;
	}
	printf("the sum of 10 number are: %d\n", sum);
	average=sum/10 ;
	printf("the average of 10 numbers are: %f", average);
	
}