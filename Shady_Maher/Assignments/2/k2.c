#include <stdio.h>
int main()
{
	char operator;
	int first, second;
	printf("Enter operator: ");
	scanf("%c", &operator);
	printf("Enter first numbers: ");
	scanf("%d", &first);
	printf("Enter second numbers: ");
	scanf("%d", &second);
	switch(operator)
	{
		case '+':
		int sum = first + second;
		printf("= %d",sum);
		break;
		case '-':
		int sub = first - second;
		printf("= %d",sub);
		break;
		case '*':
		int mult = first * second;
		printf("= %d",mult);
		break;
		case '/':
		int div = first / second;
		printf("= %d",div);
		break;
	}
}