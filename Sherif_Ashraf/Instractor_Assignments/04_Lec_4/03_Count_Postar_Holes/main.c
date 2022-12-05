#include<stdio.h>
#include"count_holes.h"

void main(void)
{
	int num;
	printf("enter number \n");
	scanf("%d",&num);
	printf("Number Of Holes In %d = %d",num,count_holes(num));
}