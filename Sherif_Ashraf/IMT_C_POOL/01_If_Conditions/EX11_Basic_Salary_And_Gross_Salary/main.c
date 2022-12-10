#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int basicSalary,da,hra,gross;
	printf("Enter Basic Salary \n");
	scanf("%d",&basicSalary);
	if(basicSalary<=10000)
	{
		hra = basicSalary*20/100;
		da = basicSalary*80/100;
		gross = basicSalary+hra+da;
		printf("Gross Salary = %d",gross);
	}
	else if(basicSalary>=10001 && basicSalary<=20000)
	{
		hra = basicSalary*25/100;
		da = basicSalary*90/100;
		gross = basicSalary+hra+da;
		printf("Gross Salary = %d",gross);
	}
	else if(basicSalary>=20001)
	{
		hra = basicSalary*30/100;
		da = basicSalary*95/100;
		gross = basicSalary+hra+da;
		printf("Gross Salary = %d",gross);
	}
}
