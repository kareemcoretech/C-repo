#include<stdio.h>
void main()
{
	float salary, hra, da, gross;
	printf("Enter basic salary of an employee: ");
	scanf("%f", &salary);
	if(salary<=10000)
	{
		hra = 0.2*salary;
		da = 0.8*salary;
	}
	else if(salary<=20000)
	{
		hra = 0.25*salary;
		da = 0.9*salary;
	}
	else
	{
		hra = 0.3*salary;
		da = 0.95 * salary;
	}
	gross = salary + hra + da;
	printf("Gross salary of employee = %.2f", gross);
}