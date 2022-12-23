#include<stdio.h>
void main()
{
	int angle1,angle2,angle3,sum;
	printf("Enter three angles of triangle: \n");
	scanf("%d %d %d",&angle1,&angle2,&angle3);
	sum=angle1+angle2+angle3;
	if(sum==180)
		printf("Triangle is valid");
	else
		printf("Triangle is not valid");
}