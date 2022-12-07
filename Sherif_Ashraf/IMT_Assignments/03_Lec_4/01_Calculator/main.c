#include<stdio.h>
#include"add.h"
#include"subtract.h"
#include"multiply.h"
#include"divide.h"
#include"and.h"
#include"or.h"
#include"not.h"
#include"xor.h"
#include"reminder.h"
#include"increment.h"
#include"decrement.h"

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
	case 5:
		{
			anding();
			break;
		}
	case 6:
		{
			oring();
			break;
		}
	case 7:
		{
			noting();
			break;
		}
	case 8:
		{
			xoring();
			break;
		}
	case 9:
		{
			reminder();
			break;
		}
	case 10:
		{
			increment();
			break;
		}
	case 11:
		{
			decrement();
			break;
		}
 	}
}