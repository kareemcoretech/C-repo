#include <stdio.h>

int main()
{
	printf("Please Enter Your working hours: \n");
	int x, salary;
	scanf("%d", &x);

	if(x>40)
	{
		salary = x*50;
		printf("Your Salary is: %d", salary);
	}
	else if(x<40)
	{
		salary = x*50*0.9;
		printf("Your Salary is: %d", salary);
	}
	else
	{
		printf("Please enter valid number");
	}
}