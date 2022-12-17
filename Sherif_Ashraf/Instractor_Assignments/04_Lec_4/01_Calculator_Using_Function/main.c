#include<stdio.h>
#include"add.h"
#include"subtract.h"
#include"multiply.h"
#include"divide.h"


void main(void)
{
	int operation;
	printf("Enter Operation Id \n");
	scanf("%d",&operation);

	switch(operation)
	{
	case 1:
		{
			add();
			break;
		}
	case 2:
		{
			subtract();
			break;
		}
	case 3:
		{
			multiply();
			break;
		}
	case 4:
		{
			divide();
			break;
		}
 	}
}