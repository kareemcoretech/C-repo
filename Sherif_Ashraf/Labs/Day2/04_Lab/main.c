#include<stdio.h>

int main()
{
	int num1 = 0 , num2 = 0 , res;
	char operation ;
	printf("Enter Number One \n");
	scanf("%d",&num1);
	printf("Enter Number Two \n");
	scanf("%d",&num2);
	printf("Enter Symbol Of Operation [+ , - , / , *]\n");
	scanf(" %c",&operation);	

	if(operation == '+')
	{
		res = num1 + num2;
		printf("Result Of Addation Operation Is : %d \n",res);
	}
	else if(operation == '-')
	{
		res = num1 - num2;
		printf("Result Of Subtraction Operation Is : %d \n",res);
	}
	else if(operation == '*' )
	{
		res = num1 * num2;
		printf("Result Of Multply Operation Is : %d \n",res);
	}
	else if(operation == '/')
	{
		res = num1 / num2;
		printf("Result Of Addation Operation Is : %d \n",res);
	}
}