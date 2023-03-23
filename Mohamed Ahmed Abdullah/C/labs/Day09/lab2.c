#include <stdio.h>
#include "STD_TYPES.h"

typedef struct employee{
	u32 salary;
	u32 bonus;
	u32 deductions;
} employee;
	
void main(void){
	employee Ahmed;
	employee Waleed; 
	employee Amr;
	
	printf("Please Enter Ahmed Salary: ");
	scanf("%d", &Ahmed.salary);
	printf("Please Enter Ahmed Bonus: ");
	scanf("%d", &Ahmed.bonus);
	printf("Please Enter Ahmed Deductions: ");
	scanf("%d", &Ahmed.deductions);
	
	printf("Please Enter Amr Salary: ");
	scanf("%d", &Amr.salary);
	printf("Please Enter Amr Bonus: ");
	scanf("%d", &Amr.bonus);
	printf("Please Enter Amr Deductions: ");
	scanf("%d", &Amr.deductions);
	
	printf("Please Enter Waleed Salary: ");
	scanf("%d", &Waleed.salary);
	printf("Please Enter Waleed Bonus: ");
	scanf("%d", &Waleed.bonus);
	printf("Please Enter Waleed Deductions: ");
	scanf("%d", &Waleed.deductions);
	
	u16 result = 0;
	result += Ahmed.salary + Ahmed.bonus - Ahmed.deductions;
	result += Waleed.salary + Waleed.bonus - Waleed.deductions;
	result += Amr.salary + Amr.bonus - Amr.deductions;
	
	printf("Total Value Needed is %d", result);
}
