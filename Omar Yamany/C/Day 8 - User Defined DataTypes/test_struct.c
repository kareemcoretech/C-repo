#include<stdio.h>
#include"types.h"

struct employee
{
	u8 id;
	u16 salary;
};

void main()
{
	struct employee omar;
	omar.id=161;
	omar.salary=5000;
	struct employee mazen = {121, 3000};
	printf("ID of Omar is: %d\nSalary of Omar is: %d\n", omar.id, omar.salary);
	printf("ID of Mazen is: %d\nSalary of Mazen is: %d\n", mazen.id, mazen.salary);
}