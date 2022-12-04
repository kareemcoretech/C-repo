#include<stdio.h>
int main()
{
	int num1,num2;
	char operator;
	printf("enter an operator:");
	scanf("%c",&operator);
	printf("enter two intgers");
	scanf("%d%d",&num1,&num2);
		switch(operator)
	{
		case '+':
		printf("=%d",num1+num2);
		break;
		case '-':
		printf("=%d",num1-num2);
		break;
		case '*':
		printf("=%d",num1*num2);
		break;
	}
	
}