#include<stdio.h>
#include"cube.h"

void main(void)
{
	int num;
	printf("Enter number \n");
	scanf("%d",&num);
	printf("Cube of %d = %d",num,cube(num));

}