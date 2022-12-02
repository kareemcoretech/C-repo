#include <stdio.h>
int main()
{
	int num1,num2,result;
	printf("please enter first number\n");
	scanf("%d",&num1);
	printf("please enter second number\n");
	scanf("%d",&num2);
	result=((num1+num2)*3)-10;
	printf("result=%d",result);
}