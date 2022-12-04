#include<stdio.h>
int main ()
{
	int number1,number2;
	printf("Enter two numbers :");
	scanf("%d %d", &number1,&number2);
	printf("sum=%d\n",number1+number2);
	printf("sub=%d\n",number1-number2);
	printf("AND=%d\n",number1&number2);
	printf("OR=%d\n",number1|number2);
	printf("XOR=%d",number1^number2);
}