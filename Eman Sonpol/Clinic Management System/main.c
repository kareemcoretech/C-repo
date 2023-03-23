#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Functions.h"
#include"types.h"
Node *Head=NULL;
char name[100];
int age,id,d;
char gender[10];
int y;
int count=0;
int main()
{
	    Clinic_Records();
	while(1)
{		
	printf(" For Admin mode press:0.\n");
	printf("For User mode press:1.\n");
	int x;
	printf("Enter you choice:");
	scanf("%d",&x);
	switch(x)
 {
		case 0:
		printf("Welcome to Admin mode:\n");
		printf("Enter your password:");
		scanf("%d",&y);
		for(count=0;count<2;count++)
	{
		if(y==1234)
		{
			int z;
			printf("To Add a new patient press:1.\n");
			printf("To Edit patient record press:2\n");
			printf("To reserve a slot with the doctor press 3:\n");
			printf("To Cancel Reservation press:4\n");
			printf("Your choice:");
			scanf("%d",&z);
			switch(z)
			{
				case 1:
				printf("Enter the patient name:");
				scanf("%s",name);
				printf("Enter patient age:");
				scanf("%d",&age);
				printf("Enter the patient gender:");
				scanf("%s",gender);
				printf("Enter the patient id:");
				scanf("%d",&id);
				Insert_At_Last(name,age,gender,id);
				break;
				case 2:
				printf("Enter patient id:");
				scanf("%d",&id);
				Edit_Record(id);
				break;
				case 3:
				Reservation();
				break;
				case 4:
				printf("Enter Patient id:");
				scanf("%d",&d);
				Cancel_Reservation(d);
				break;
				default:
				printf("Invalid Entry.");
				break;
			}
			
		}
		else if(y!=1234)
		{
			printf("Password incorrect try again.\n");			
			printf("Enter your password:");
		    scanf("%d",&y);
			if(count==2)
	      {
		  printf("Password wrong three times in a row.");
		   break;
	      }
		}
	}
     break;
	case 1:
	printf("Welcome to user mode.\n");
	printf("For Patient Record press 1\n");
	printf("For Today's Appointments press 2\n");
	printf("Enter your choice:");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		printf("Enter Patient Id:");
		scanf("%d",&id);
		Print_List(id);
		break;
		case 2:
		Print_App();
		break;
		default:
		printf("Invalid Entry.");
		break;
	}
	break;
	default:
	printf("Invalid Entry.");
	break;
	
	
		
 }
}
	
}