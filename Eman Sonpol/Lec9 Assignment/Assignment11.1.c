#include<stdio.h>
#include"types.h"
typedef struct
{
	u8 *name;
	u8 roll;
	u16 mark;
}Students;
int main()
{
	int x;
	printf("Enter the number of students:");
	scanf("%d",&x);
	Students Array[x];
	for(int i=0;i<x;i++)
	{
		printf("Enter the student name:");
		scanf("%s",&Array[i].name);
		printf("Enter the student roll:");
		scanf("%d",&Array[i].roll);
		printf("Enter the student mark:");
		scanf("%d",&Array[i].mark);
	}
	for(int i=0;i<x;i++)
	{
		printf("%s\n",Array[i].name);
		printf("%d\n",Array[i].roll);
		printf("%d\n",Array[i].mark);
	}
}
