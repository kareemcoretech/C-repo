#include<stdio.h>
#include"datatypes.h"

struct employee
{
	u8 id;
	u8 *name;
	u16 salary;
	u8 *departmentName;

};

struct department
{
	u8 id;
	u8 floor;
	u8 *name;
	u8 *employeeName;
};

void main(void)
{

	struct employee sherif = {5,"sherif",5000,"dev"};
	struct department dev = {1,3,"dev","sherif"};

	
	printf("Employee Id : %d \n",sherif.id);
	printf("Employee Name : %s \n",sherif.name);
	printf("Employee salary : %d \n",sherif.salary);
	printf("Employee departement : %s \n",sherif.departmentName);

	printf("\n \n");

	printf("departement Id : %d\n",dev.id);
	printf("departement floor : %d\n",dev.floor);
	printf("departement name : %s\n",dev.name);
	printf("departement employee name : %s\n",dev.employeeName);

}