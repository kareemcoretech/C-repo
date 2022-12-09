#include<stdio.h>

void main(void)
{
	int num,pow,res=1;

	printf("Enter The Number\n");
	scanf("%d",&num);
	printf("Enter The Power \n");
	scanf("%d",&pow);

	for(int i = 1;i<=pow;i++)
	{
		res *= num; 
	}
	printf("%d Power %d = %d",num,pow,res);
}