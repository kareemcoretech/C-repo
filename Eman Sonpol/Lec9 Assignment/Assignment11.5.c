#include<stdio.h>
#include"types.h"
 typedef union Family_Name
{
	struct
	{
		char *First_Name;
		char *Second_Name;
	}Name;
	char Full_Name;
}Family;
int main()
{
	Family x;
	x.Full_Name="Ahmed Khlaed";
	x.Name.First_Name="Mohmaed";
	printf("%s",x.Full_Name);
	
}