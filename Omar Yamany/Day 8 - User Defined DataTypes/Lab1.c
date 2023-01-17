#include<stdio.h>
#include"types.h"

struct employee
{
	u16 salary,bonus,deduction;
}ahmed, waleed, amr;

void main()
{
	printf("Enter Ahmed's Salary: ");
	scanf("%d", &ahmed.salary);
	printf("Enter Ahmed's Bonus: ");
	scanf("%d", &ahmed.bonus);
	printf("Enter Ahmed's Deduction: ");
	scanf("%d", &ahmed.deduction);
	printf("Enter Waleed's Salary: ");
	scanf("%d", &waleed.salary);
	printf("Enter Waleed's Bonus: ");
	scanf("%d", &waleed.bonus);
	printf("Enter Waleed's Deduction: ");
	scanf("%d", &waleed.deduction);
	printf("Enter Amr's Salary: ");
	scanf("%d", &amr.salary);
	printf("Enter Amr's Bonus: ");
	scanf("%d", &amr.bonus);
	printf("Enter Amr's Deduction: ");
	scanf("%d", &amr.deduction);
	printf("Total value needed is: %d", (ahmed.salary+ahmed.bonus-ahmed.deduction+waleed.salary+waleed.bonus-waleed.deduction+amr.salary+amr.bonus-amr.deduction));
}