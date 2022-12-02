#include <stdio.h>

int main ()
{
	float num1,num2,result ;
	char opp ;
	printf("please enter first number \n");
	scanf("%f",&num1);
	printf("please enter second number \n");
	scanf("%f",&num2);
	printf("please enter oppration \n");
	scanf(" %c",&opp);
	switch(opp)
	{
		case '+' :
		result = num1 + num2;
		break ;
		case '-' :
		result = num1 - num2;		
		break ;
		case '*' :
		result = num1 * num2;
		break ;
		case '/' :
		result = num1 / num2;
		break ;
		default :
		printf("Error");
		break ;
	}
	
	printf("result = %f",result);
}