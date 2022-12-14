#include<stdio.h>
void main()
{
	int angle1,angle2,angle3,sum;
	printf("Enter three angles of triangle: \n");
	scanf("%d %d %d",&angle1,&angle2,&angle3);
	if((angle1==angle2) && (angle2==angle3))
		printf("Triangle is equilateral");
	else if((angle1==angle2) || (angle1==angle3) || (angle2==angle3))
		printf("Triangle is Isosceles");
	else
		printf("Triangle is Scalene");
}