#include<stdio.h>

#include"datatypes.h"



typedef struct school
{
	u8 *name;
	u8 id;
	u16 address;
}student;



void main(void)
{
	student sherif;

	student *ptr = &sherif;

	ptr->id = 10;
	ptr->name = "sherif";
	ptr->address = 20;

	printf("name : %d \n",ptr->id);
	printf("id : %s \n",ptr->name);
	printf("address : %d \n",ptr->address);
	
}


