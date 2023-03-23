#include<stdio.h>
void main()
{
	int num, power, result=1;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the power: ");
	scanf("%d", &power);
	
	for(int i=1;i<=power;i++)
	{
		result = result*num;
	}
	printf("Result = %d", result);
}