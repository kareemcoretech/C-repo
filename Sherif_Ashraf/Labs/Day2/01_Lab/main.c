#include<stdio.h>

int main()
{
	int x = 0 , hour_rate = 50, salary = 0 , salary_after_deduction = 0;
	printf("Enter Number Of Hours \n");
	scanf("%d",&x);

	if(x > 40)
	{
		salary = hour_rate * x;
		printf("Your Salary Is : %d",salary);
	}
	else if(x <= 40)
	{
		salary = (hour_rate * x);
		salary_after_deduction = salary * 0.9;
		printf("Your Salary After Deduction Is : %d",salary_after_deduction);
	}
}