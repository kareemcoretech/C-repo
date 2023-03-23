#include<stdio.h>

double get_power(int n, int p, float *ptr);

void main()
{
	int number, power;
	float result_neg;
	printf("Enter value of number: ");
	scanf("%d", &number);
	printf("Enter value of power: ");
	scanf("%d", &power);
	double result = get_power(number,power,&result_neg);
	printf("%d power to %d = %f\n", number, power, result);
	printf("%d power to -%d = %f", number, power, result_neg);
}

double get_power(int n, int p, float *ptr)
{
	double result=1;
	for(int i=1;i<=p;i++)
	{
		result *= (float)(n);
	}
	*ptr = 1/result;
	return result;
}