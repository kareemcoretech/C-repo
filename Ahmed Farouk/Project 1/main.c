/*Ahmed Mahmoud Farouk ----- 1/1/2022
Clinic Management System */

#include <stdio.h>
#include <stdlib.h>
#include "types.h" //personal library for data types

void search (u16 x);
u8 searchifnot (u16 x);
void disp (u16 x);

void creat_ID_linkedlist(void);


void creat_slot_linkedlist(void);
void insert_slot(u16 copyid, u8 copyreservation);
u8 search_id (u16 x);

void search_free_slot(void);
void userdisp (void);


typedef struct clinic
{
    u8 name[50];
    u8 age;
    u8 gender[6];
    u16 id;
    struct clinic *next; //creating a pointer named next for a linked list

}patient,node;


 node *head= NULL;
 patient first; //creating object "first" of a data type patient
 node *test;
 void insert (node *add);


typedef struct time
{
    u16 id;
    u8 reservation[1000];
    u8 reserved_flag;
    struct time *then;

}res;

res *header=NULL; //a head for the reservation linked list
res person;






void main ()
{
    creat_ID_linkedlist(); //creating a linked list of IDs
    creat_slot_linkedlist(); //creating a linked list of slots


person.id=first.id;


    u8 exit=1,trails=3; //only 3 trails for password
    u8 choice,i=1,f=0,operation,slot,repeat=1,userchoice,user_id;
    u16 password;


while(exit!=0)
{




    printf("\nPlease Enter 'a' for admin mode and 'u' for user mode aslo press 'e' for exit: ");
    scanf(" %c", &choice);
    switch (choice)
    {

        case 'a':
            exit=1;
            printf("\nYou're in admin mode\nPlease Enter the password : ");
            for(i=1;i<=trails;i++)
            {
                scanf("%d",&password);
                if (password == 1234)
                {
                    printf("\nPassword is correct\n");
                    break;
                }
                else
                {
                    printf("\nPlease Try again (%d) : ",i);

                }
            }
            repeat=1;
            while(repeat!=0)
                {
                if (password == 1234)
                {

                    printf("\nPlease Choose your operation\n1- Add new patient record");
                    printf("\n2- Edit patient record\n3- Reserve a slot with the doctor\n4- Cancel reservation \n");
                    printf("5- Exit Admin Mode\n");
                    scanf("%d",&operation);
                    switch(operation)
                    {
                        case 1:
                                printf("Please enter Name : ");
                                scanf("%s",&first.name);

                                printf("\nPlease enter Age : ");
                                scanf("%d",&first.age);

                                printf("\nPlease enter Gender : ");
                                scanf("%s",&first.gender);

                                printf("\nPlease enter ID : ");
                                scanf("%d",&first.id);

                                search (first.id); //searching if ID is already exists

                                insert(&first);//adding the ID to the linked list since it's not exist



                                break;


                        case 2:
                                printf("\nPlease enter the ID again : ");
                                scanf("%d",&first.id);
                               u8 flag=searchifnot(first.id); //searching if ID does not exist
                               if (flag==1)
                               {
                                printf("\nThe ID you entered is not available\n");

                               }
                               else
                               {
                                disp(first.id);

                                printf("\nPlease enter the new Name : ");
                                scanf("%s",&first.name);

                                printf("\nPlease enter the new Age : ");
                                scanf("%d",&first.age);

                                printf("\nPlease enter the new Gender : ");
                                scanf("%s",&first.gender);

                                printf("\nPlease enter the new ID : ");
                                scanf("%d",&first.id);

                                insert(&first);

                               }



                                break;


                        case 3:



                                printf("\nPlease enter the ID again : ");
                                scanf("%d",&first.id);

                            u8 flag3=searchifnot(first.id); //searching if ID already exists

                            if (flag3==0)
                            {

                                u8 flag2=search_id(first.id);//search if the ID already have a reservation or not

                                if(flag2==0)
                                {

                                printf("\n1- from 2pm to 2:30pm");
                                printf("\n2- from 2:30pm to 3pm\n3- from 3pm to 3:30pm");
                                printf("\n4- from 3:30pm to 4pm\n5- from 4:30pm to 5pm\n");
                                search_free_slot();
                                printf("\nPlease Enter the desired slot : ");
                                scanf("%d",&slot);

                                insert_slot(first.id,slot);


                                 }
                                    else if(flag2==1)

                                    {
                                    printf("\nyour ID is %d and you already have a reservation number %d\n ",first.id,slot);

                                    }

                            }

                                else if(flag3==1)
                                {
                                printf("\nThe ID you entered is not available\n");

                                }
                                break;
                        case 4:
                            break;
                        case 5:
                            repeat =0;
                            break;

                    }





                }





                }
            break;
        case'u':
            exit=1;
            printf("\n1- View Patient Record\n2- View Today's reservations\n");
            scanf("%d",&userchoice);
            if(userchoice==1)
            {
                                printf("\nPlease enter your ID : ");
                                scanf("%d",&user_id);
                               u8 flag=searchifnot(user_id); //searching if ID is already exists
                               if (flag==1)
                               {
                                printf("\nThe ID you entered is not available\n");

                               }
                               else
                               {
                                disp(user_id);

                               }
            }else if (userchoice==2)
            {

                userdisp();


            }else
            {
                printf("\nWrong choice\n");
            }
            break;

        case'e':
            exit=0;
            break;

}
}
}
void creat_ID_linkedlist(void)
{
    node *n=(node*)malloc(sizeof(node));
    n->name;
    n->age;
    n->gender;
	n->id;
	n->next=NULL;
	head=n;
}

void search (u16 x)
{
    node *search=head;
	while(search!=NULL)
	{
		if(search->id==x)
		{
			printf("\nThe ID %d is already taken\n",x);
		}
        search=search->next;
	}
}
void insert (node *add)
{

		if(head!=NULL)
	{
        node *s=(node*)malloc(sizeof(node));

        s->name[50]=add->name[50];
		s->age=add->age;
		s->gender[6]=add->gender[6];
		s->id=add->id;

		s->next= head;
		head=s;


			}
	else
	{
		creat_ID_linkedlist();
	}

}



u8 searchifnot (u16 x)
{
    u8 flag;
    node *searchifnot=head;
	while(searchifnot!=NULL)
	{
		if(searchifnot->id!=x)
		{
			flag=1;
		}
		else
        {
            flag=0;
            break;


        }

        searchifnot=searchifnot->next;
	}
	return flag;
}
void disp (u16 x)
{
     node *print=head;

	while(print!=NULL)
	{
	    if(print->id==x)
		{

	//	printf("\n\tName : %s\n\tAge : %d\n\tGender : %s\n\tID : %d\n",first.name,print->age,first.gender,print->id);
				printf("\n\tName : %s\n\tAge : %d\n\tGender : %s\n\tID : %d\n",first.name,print->age,first.gender,print->id);


		}
        print=print->next;

	}

}







void creat_slot_linkedlist(void)
{
	res *k=(res*)malloc(sizeof(res));
	k->id ;
	k->reservation[1000];
	k->reserved_flag=0;
	k->then= NULL;
	header=k;

}
void insert_slot(u16 copyid, u8 copyreservation)
{
        u8 i;

        res *f=(res*)malloc(sizeof(res));

		f->id=copyid;
        switch(copyreservation)
                                {

                                case 1: f->reservation[f->id]=copyreservation;
                                            f->reservation[0]=1;
                                            f->reservation[1]=0;
                                            f->reservation[2]=0;
                                            f->reservation[3]=0;
                                            f->reservation[4]=0;

                                break;
                                case 2: f->reservation[f->id]=copyreservation;
                                            f->reservation[0]=0;
                                            f->reservation[1]=1;
                                            f->reservation[2]=0;
                                            f->reservation[3]=0;
                                            f->reservation[4]=0;
                                break;
                                case 3: f->reservation[f->id]=copyreservation;
                                            f->reservation[0]=0;
                                            f->reservation[1]=0;
                                            f->reservation[2]=1;
                                            f->reservation[3]=0;
                                            f->reservation[4]=0;
                                break;
                                case 4: f->reservation[f->id]=copyreservation;
                                            f->reservation[0]=0;
                                            f->reservation[1]=0;
                                            f->reservation[2]=0;
                                            f->reservation[3]=1;
                                            f->reservation[4]=0;
                                break;
                                case 5: f->reservation[f->id]=copyreservation;
                                            f->reservation[0]=0;
                                            f->reservation[1]=0;
                                            f->reservation[2]=0;
                                            f->reservation[3]=0;
                                            f->reservation[4]=1;
                                break;

                                    }

		f->reserved_flag=1;
		f->then= header;
		header = f;

}

u8 search_id (u16 x)
{
    u8 flag;
	res *search=header;
	while(search!=NULL)
	{
		if(search->id==x)
		{
			//printf("\nYour ID : %d\nYour reservation is %d\n",search->id,search->reservation);
			flag=1;
		}
		else
        {
            flag=0;


        }
            search=search->then;
	}
	return flag;
}
void search_free_slot(void)
{   u8 i;
    res *search=header;
	while(search!=NULL)
	{
		if(search->reserved_flag==1)
		{
            printf("\nThe slot which has 0 is available and The slot which has 1 is not available\n");
            for (i=0;i<5;i++)
            {
               printf("\n\tThe slot %d is : %d\n",i+1,search->reservation[i]);

            }


        }


            search=search->then;
    }
}
void userdisp (void)
{
     res *print=header;

	while(print->then!=NULL)
	{

        printf("\n\tID : %d\n\tReservation slot : %d\n",print->id,print->reservation[print->id]);

        print=print->then;

	}

}
