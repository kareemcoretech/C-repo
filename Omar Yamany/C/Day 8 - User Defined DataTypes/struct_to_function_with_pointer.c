#include<stdio.h>
#include"types.h"

typedef struct car
{
	u8 *name;
	u8 ID;
	u16 serial;
}BMW;
void print_struct(BMW x);
void main()
{
	BMW M3 = {"BMW M3",10,2022};
	print_struct(M3);
	BMW *ptr = &M3;
	ptr->ID = 50;
	ptr->serial = 2015;
	print_struct(M3);
}

void print_struct(BMW x)
{
	printf("Name\tID\tSerial\n");
	printf("%s\t%d\t%d\n", x.name, x.ID, x.serial);
}