
#include<stdio.h>
#include"datatypes.h"



typedef struct school
{
	u8 name[50];
	u8 id;
	u16 address[50];
}student;


void main(void)
{


	student studentArr[2];
	for(int i=0;i<2;i++)
	{
		printf("enter name of sudent %d : ",i);
		scanf("%s",studentArr[i].name);
		printf("enter id of sudent %d :",i);
		scanf("%d",&studentArr[i].id);
		printf("enter address of sudent %d :",i);
		scanf("%s",studentArr[i].address);
	}
	for(int i=0;i<2;i++)
	{
		printf("name of student : %s\n",studentArr[i].name);
		printf("id of student : %d\n",studentArr[i].id);
		printf("address of student : %s\n",studentArr[i].address);
	}

}