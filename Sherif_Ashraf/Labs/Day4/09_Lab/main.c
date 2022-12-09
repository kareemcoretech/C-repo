#include<stdio.h>
#include"min.h"
#include"max.h"

void main(void)
{
	int num1,num2,num3,num4;
	printf("Enter Four Values \n");
	scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
	max(num1,num2,num3,num4);
	min(num1,num2,num3,num4);
}