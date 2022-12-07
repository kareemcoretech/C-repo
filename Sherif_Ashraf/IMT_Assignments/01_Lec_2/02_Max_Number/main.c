#include <stdio.h>

int main()
{
	int num1,num2,num3;
	
	printf("Enter Number 1:\n");
	scanf("%d",&num1);
	printf("Enter Number 2:\n");
	scanf("%d",&num2);
	printf("Enter Number 3:\n");
	scanf("%d",&num3);

	(num1 > num2 && num1 > num3)? printf("Max Number Is %d",num1):(num2 > num1 && num2 > num3)? printf("Max Number Is %d",num2):
	printf("Max Number Is %d",num3);

	
}