#include <stdio.h>

int main()
{
	int num, power, result=1;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("Enter power: ");
	scanf("%d", &power);
	
	for (int j=0; j<power;j++)
	{
		result *= num;
	}
	printf("Result = %d", result);
}