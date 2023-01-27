#include<stdio.h>
#include"types.h"

typedef struct school
{
	u8 name;
	u16 ID;
	u8 address;
}students, teachers;

void main()
{
	students array1[10];
	u8 sizeofarray = sizeof(array1)/sizeof(array1[0]);
	students temp;
	for(int i=0;i<sizeofarray;i++)
	{
		printf("Enter Student %d's name: ", i+1);
		scanf("%d", &temp.name);
		printf("Enter %d's ID: ", temp.name);
		scanf("%d", &temp.ID);
		printf("Enter %d's Address: ", temp.name);
		scanf("%d", &temp.address);
		array1[i] = temp; //array1[i] = {123,153,346};
	}
	printf("\n--------------\n");
	printf("#\tName\tID\tAddress\n");
	for(int i=0;i<sizeofarray;i++)
	{
		printf("%d\t%d\t%d\t%d\n", i, array1[i].name, array1[i].ID, array1[i].address);
	}
	
}