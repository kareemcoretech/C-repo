#include <stdio.h>

int main()
{
	int num1,num2,res;
	
	printf("Enter Number 1:\n");
	scanf("%d",&num1);
	printf("Enter Number 2:\n");
	scanf("%d",&num2);

	res = ((num1 + num2)*3)-10;
	printf("Result = %d",res);
	
}