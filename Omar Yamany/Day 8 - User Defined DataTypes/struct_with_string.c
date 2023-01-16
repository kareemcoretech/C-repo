#include<stdio.h>
#include"types.h"

struct employee
{
	u8 *name;
	u8 ID;
	u16 salary;
};

void main()
{
	struct employee omar;
	omar.name = "Omar Yamany";
	omar.ID = 16;
	omar.salary = 1000;
	printf("Omar's full name: %s\n", omar.name);
	printf("Omar's ID: %d\n", omar.ID);
	printf("Omar's salary: %d", omar.salary);
}