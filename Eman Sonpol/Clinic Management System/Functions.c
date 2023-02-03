#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"types.h"
#include"Functions.h"
extern Node *Head;
int Array_Slots[5]={0,0,0,0,0};
int t;
int d;

void Add_Patient(u8 name[],u32 age,u8 gender[],u32 id)
{
	Node *n=(Node*)malloc(sizeof(Node));
	strcpy(n->name,name);
	strcpy(n->gender,gender);
	n->age=age;
	n->id=id;
	n->next=NULL;
	printf("Patient Added.\n");
	Head=n;
}
void Clinic_Records(void)
{
	            char name[]="Eman";
				int age=23;
				char gender[]="Female";
				int id=1155;
				Add_Patient(name,age,gender,id);
}
void Insert_At_Last(u8 name[],u32 age,u8 gender[],u32 id)
{
	Node *last=(Node*)malloc(sizeof(Node));
	Node *Tail=Head;
	while (Tail->next!=NULL)
	{
		Tail=Tail->next;
	}
		strcpy(last->name,name);
	    strcpy(last->gender,gender);
		last->age=age;
		last->id=id;
		last->next=NULL;
		Tail->next=last;

	
}
void Edit_Record(u32 id)
{
	Node *Current=Head;
	u8 flag=0;
	while(Current!=NULL &&flag==0)
	{
		if(Current->id==id)
		{
			printf("Enter the Name:");
			scanf("%s",Current->name);
			printf("Enter gender:");
			scanf("%s",Current->gender);
			printf("Enter age:");
			scanf("%d",&Current->age);
			printf("Enter id:");
			scanf("%d",&Current->id);
			flag=1;	
		}
		Current=Current->next;
	}
	if(flag==0)
	{
		printf("This id doesn't extist.");
	}
}
void Reservation(void)
{
	Node *Current=Head;
	printf("Please Enter patient id:\n");
	scanf("%d",&d);
	u8 flag=0;
	if(Array_Slots[0]==0)
	{
		printf("2 to 2:30 pm slot is available.\n");
		printf("Press 1 to reserve.\n");
	}
	if(Array_Slots[1]==0)
	{
		printf("2:30 to 3pm slot is available.\n");
		printf("Press 2 to reserve.\n");
	}
	if(Array_Slots[2]==0)
	{
		printf("3 to 3:30 pm slot is available.\n");
		printf("Press 3 to reserve.\n");
	}
	if(Array_Slots[3]==0)
	{
		printf("4 to 4:30 pm slot is available.\n");
		printf("Press 4 to reserve.\n");
	}
	if(Array_Slots[4]==0)
	{
		printf("4:30 to 5pm slot is avaliable.\n");
		printf("Press 5 to reserve.\n");
	}
	printf("Enter your choice:");
	scanf("%d",&t);
	while(Current!=NULL)
	{
		if(Current->id==d)
		{
			Array_Slots[t-1]=d;
			flag=1;
		}
		Current=Current->next;
	}
	if(flag==0)
	{
		printf("This id doesn't exist");
	}
	
}
void Cancel_Reservation(u32 d)
{
	u8 flag=0;
	for(u32 i=0;i<5;i++)
	{
		if(Array_Slots[i]==d)
		{
			Array_Slots[i]=0;
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("Wrong id");
	}
}
void Print_List(u32 id)
{
	Node *Current=Head;
	u8 flag=0;
	while(Current!=NULL)
	{
		if(Current->id==id)
		{
			printf("Name:%s\n",Current->name);
			printf("Age:%d\n",Current->age);
			printf("Gender:%s\n",Current->gender);
			printf("Id:%d",Current->id);
			flag=1;
		}
		Current=Current->next;
	}
	if(flag==0)
	{
		printf("Wrong id");
	}
}
void Print_App(void)
{
	if(Array_Slots[0]!=0)
		{
			printf("2 to 2:30 pm slot is reserved by Patient:%d\n",Array_Slots[0]);

		}
		if(Array_Slots[1]!=0)
		{
			printf("2:30 to 3pm slot is reserved by Patient:%d\n",Array_Slots[1]);

		}
		if(Array_Slots[2]!=0)
		{
			printf("3 to 3:30 pm slot is rserved by Patient:%d\n",Array_Slots[2]);
		}
		if(Array_Slots[3]!=0)
		{
			printf("4 to 4:30 pm slot is rserved by Patient:%d\n",Array_Slots[3]);
		}
		if(Array_Slots[4]!=0)
		{
			printf("4:30 to 5pm slot is reserved by Patient:%d\n",Array_Slots[4]);
		}
		if(Array_Slots[0]==0&& Array_Slots[1]==0 && Array_Slots[2]==0 && Array_Slots[3]==0 && Array_Slots[4]==0)
		{
			printf("\nThere is no appointments for today.");
		}
}