#include<stdio.h>
#include"types.h"
typedef struct
{
	u8 *name;
	u8 Id;
	u8 grade;
}Students;
int main()
{
	Students Array[10];
	for(int i=0;i<2;i++)
	{
		printf("Enter the student name:");
		fgets(Students[i].name,sizeof(Students[i].name),stdin);
		//scanf("%[^\n]s",&Array[i].name);
		printf("Enter student id:");
		scanf("%d",&Students[i].Id);
		printf("Enter student grade:");
		scanf("%d",&Students[i].grade);
	}
	for(int i=0;i<2;i++)
	{
		printf("%s\n",Students[i].name);
		printf("%d\n",Students[i].Id);
		printf("%d\n",Students[i].grade);
	}
	
}