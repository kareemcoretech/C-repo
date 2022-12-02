#include <stdio.h>

int main ()
{
	
	int num1 ,num2,result;
	char x;
	printf("Please enter first number\n");
	scanf("%d",&num1);
	printf("Please enter second number\n");
	scanf("%d",&num2);
	printf("Please enter opration\n");
	scanf(" %c",&x);
	if (x== '+' )
	{
		result = num1  + num2;
	}
	else if (x=='-')
	{
		result = num1  - num2;
	}
	else if (x=='*')
	{
		result = num1  * num2;
	}
	else if (x=='/')
	{
		result = num1  / num2;
	}
	else 
	{
		printf("Error\n");
		
	}
	printf("the result = %d\n",result);
	
	
}