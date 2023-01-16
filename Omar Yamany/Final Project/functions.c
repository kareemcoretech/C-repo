/**
 * **Clinic Management System**
 * Author:     Omar Mohamed Yamany
 * Created:    01.01.2023
 * Group ID:   0225112210
 * Student ID: 022511221010
 * Made for IMT School for educational use only
 * All copyrights are reserved
 **/

// you can select "Fold All" from view menu to get better visibility of the functions

#include<stdio.h>
#include<stdlib.h>
#include<string.h> // for strcpy and strcspn
#include<conio.h> // for getch
#include"data_types.h"

extern patient *head; //external pointer from main.c
extern patient *tail; //external pointer from main.c
extern time_slot *time_head; //external pointer from main.c
extern time_slot *time_tail; //external pointer from main.c

void import_patients_data() //reads patients' linked list to patients_data.txt
{
	FILE *file = fopen("patients_data.txt","r");
	if (file == NULL)
	{
		printf("Error! Couldn't import data (file not found!)\n");
		return;
	}
	patient n;
	head = NULL; // to create a new linked list, if this line is not here, it will add to the previous linked list
	while(fread(&n,sizeof(patient),1,file))
	{
		if(head == NULL) //insert at first
		{
			head = (patient*)malloc(sizeof(patient));
			head->next = NULL;
			head->ID = n.ID;
			strcpy(head -> name,n.name);
			strcpy(head -> gender,n.gender);
			head -> age = n.age;
			tail = head;
		}
		else //insert at end
		{
			patient *temp = (patient*)malloc(sizeof(patient));
			tail->next = temp;
			tail = temp;
			temp->next = NULL;
			temp->ID = n.ID;
			strcpy(temp -> name,n.name);
			strcpy(temp -> gender,n.gender);
			temp -> age = n.age;
		}
	}
	fclose(file);
	printf("***Patients' data imported successfully***\n");
}

void export_patients_data() //saves patients' linked list to patients_data.txt
{
	patient *index = head;
	FILE *file = fopen("patients_data.txt","w");
	
	while(index!=NULL)
	{
		fwrite(index,sizeof(patient),1,file);
		index = index->next;
	}
	printf("***Patients' data was saved successfully***\n");
	fclose(file);
}

void display_as_table() //displays all nodes in linked list in a table
{
	if(head==NULL)
	{
		printf("No data to show!\n");
		printf("Press any key to continue...");
		getch();
		return;
	}
	printf("***************************************************************************\n");
	printf("*  ID \t\t Age \t Gender \t Name\n*\n");
	for(patient *index = head ; index!=NULL ; index=index->next)
	{
		printf("*  %-10d \t %d \t %-10s \t %5s\n", index->ID, index->age, index->gender, index->name);
	}
	printf("***************************************************************************\n");
	printf("Press any key to continue...");
	getch();
}

void display_single_node(patient *node) //displays data of a single node in a linked list
{
	printf("ID: %d\n", node->ID);
	printf("Name: %s\n", node->name);
	printf("Gender: %s\n", node->gender);
	printf("Age: %d\n\n", node->age);
}

u16 unique_ID_check(u32 sent_ID) //function that returns 0 if ID was found at any node in linked list, returns 1 if ID is unique
{
	patient *index = head;
	while(index!=NULL)
	{
		if(index->ID == sent_ID)
		{
			return 0;
		}
		index = index->next;
	}
	return 1;
}

void insert_new_record() //Add new patient record (inserts at first if head points to null, and inserts at end otherwise)
{
	system("cls");
	printf("Add new patient record\n");
	printf("----------------------\n\n");
	patient *n = (patient*)malloc(sizeof(patient));
	if(head == NULL) //insert at first
	{
		head = n;
		n->next = NULL;
		tail = n;
		printf("Enter ID: ");
		scanf("%d", &n->ID);
		getchar(); //to stop the next fgets from taking \n as input
		printf("Enter name: ");
		fgets(n->name,200,stdin);
		n->name[strcspn(n->name, "\n")] = '\0'; //remove \n at the end of the input
		printf("Enter gender: ");
		fgets(n->gender,7,stdin);
		n->gender[strcspn(n->gender, "\n")] = '\0'; //remove \n at the end of the input
		printf("Enter age: ");
		scanf("%d", &n->age);
	}
	else //insert at end
	{
		printf("Enter ID: ");
		scanf("%d", &n->ID);
		getchar(); //to stop the next fgets from taking \n as input
		if(!unique_ID_check(n->ID))
		{
			printf("ID is not unique, please try again with another ID\n\n");
			free(n);
			printf("Press any key to continue...");
			getch();
			return;
		}
		u16 unique_ID_flag;
		unique_ID_flag = unique_ID_check(n->ID);
		if(unique_ID_flag==0)
		{
			free(n);
			return;
		}
		printf("Enter name: ");
		fgets(n->name,200,stdin);
		n->name[strcspn(n->name, "\n")] = '\0'; //remove \n at the end of the input
		printf("Enter gender: ");
		fgets(n->gender,10,stdin);
		n->gender[strcspn(n->gender, "\n")] = '\0'; //remove \n at the end of the input
		printf("Enter age: ");
		scanf("%d", &n->age);
		tail->next = n;
		tail = n;
		n->next = NULL;
	}
	export_patients_data(); //save linked list
	printf("Press any key to continue...");
	getch();
	system("cls");
}

void edit_age(u32 ID, u8 new_age) // edit age of specific node
{
	for(patient *temp = head;temp!=NULL;temp = temp->next)
	{
		if(temp->ID == ID)
		{
			temp->age = new_age;
			break;
		}
	}
	printf("Patient's age is now changed!\n");
	printf("Press any key to continue...");
	getch();
	system("cls");
	return;
}

void edit_ID(u32 ID, u32 new_ID) // edit ID of specific node
{
	for(patient *temp = head;temp!=NULL;temp = temp->next)
	{
		if(temp->ID == ID)
		{
			temp->ID = new_ID;
			break;
		}
	}
	printf("Patient's ID is now changed!\n");
	printf("Press any key to continue...");
	getch();
	system("cls");
	return;
}

void edit_gender(u32 ID, u8 new_gender[]) // edit gender of specific node
{
	for(patient *temp = head;temp!=NULL;temp = temp->next)
	{
		if(temp->ID == ID)
		{
			strcpy(temp->gender, new_gender);
			break;
		}
	}
	printf("Patient's gender is now changed!\n");
	printf("Press any key to continue...");
	getch();
	system("cls");
	return;
}

void edit_name(u32 ID, u8 new_name[]) // edit name of specific node
{
	for(patient *temp = head;temp!=NULL;temp = temp->next)
	{
		if(temp->ID == ID)
		{
			strcpy(temp->name, new_name);
			break;
		}
	}
	printf("Patient's name is now changed!\n");
	printf("Press any key to continue...");
	getch();
	system("cls");
	return;
}

void edit_patient_record() // Main menu of edit record mode
{
	while(1)
	{
		system("cls");
		printf("Edit mode:\n");
		printf("----------\n");
		u8 choice, found_flag=0;
		u32 entered_ID;
		printf("1.Display all patient records\n");
		printf("2.Choose a patient with his/her ID\n");
		printf("0.Exit edit mode\n");
		printf("Your entry: ");
		scanf("%d", &choice);
		patient *current = (patient*)malloc(sizeof(patient));
		current = head;
		switch(choice)
		{
			case 1:
				display_as_table();
				printf("\n");
			break;
			
			case 2:
				printf("Enter ID: ");
				scanf("%d", &entered_ID);
				found_flag = unique_ID_check(entered_ID);
				if(found_flag==1)
				{
					printf("Error! ID not found\n");
					printf("Press any key to continue...");
					getch();
					system("cls");
					return;
				}
				while(current!=NULL)
				{
					if(entered_ID == current->ID)
					{
						break;
					}
					current = current->next;
				}
				printf("ID Found!\n"); 
				printf("---------\n\n");
				display_single_node(current);
				printf("Pick the data you want to change: \n");
				printf("1.ID\n");
				printf("2.Name\n");
				printf("3.Gender\n");
				printf("4.Age\n");
				printf("0.Cancel\n");
				printf("Your entry: ");
				scanf("%d", &choice);
				getchar();
				switch(choice)
				{
					case 1:
						u32 temp_ID;
						printf("Enter patient's ID after edit: ");
						scanf("%d", &temp_ID);
						edit_ID(entered_ID, temp_ID);
						export_patients_data();
					break;
					
					case 2:
						u8 temp_name[200];
						printf("Enter patient's name after edit: ");
						fgets(temp_name,200,stdin);
						temp_name[strcspn(temp_name, "\n")] = '\0'; //remove \n at the end of the input
						edit_name(entered_ID, temp_name);
						export_patients_data();
					break;
					
					case 3:
						u8 temp_gender[10];
						printf("Enter patient's gender after edit: ");
						fgets(temp_gender,10,stdin);
						temp_gender[strcspn(temp_gender, "\n")] = '\0'; //remove \n at the end of the input
						edit_gender(entered_ID, temp_gender);
						export_patients_data();
					break;
					
					case 4:
						u8 temp_age;
						printf("Enter patient's age after edit: ");
						scanf("%d", &temp_age);
						edit_age(entered_ID, temp_age);
						export_patients_data();
					break;
					
					case 0:
						//cancel
					break;
				}
			break;
			
			case 0:
				return;
		}
	}
}

void reserve_time_slot(u8 slot_n) // Reserve a time slot
{
	time_slot *current = time_head;
	u8 found_flag=0;
	while(current != NULL)
	{
		if(current->slot_number == slot_n)
		{
			if(current->reserved_flag == 1)
			{
				printf("Error! Time slot already reserved, please pick another one!\n");
				printf("Press any key to continue...");
				getch();
				return;
			}
			found_flag=1;
			break;
		}
		current = current -> next;
	}
	if(found_flag==0)
	{
		printf("Error! Time slot was not found (did you enter a correct time slot number?)\n");
		printf("Press any key to continue...");
		getch();
		return;
	}
	printf("\nEnter ID of patient to reserve at %s: ", current->slot_time);
	u32 entered_ID;
	scanf("%d", &entered_ID);
	if(unique_ID_check(entered_ID))
	{
		printf("\nError! ID not found.\n");
		printf("Press any key to continue...");
		getch();
		return;
	}
	current->reserved_ID = entered_ID;
	current->reserved_flag = 1;
	printf("Success! ID: %d is now reserving from %s\n", current->reserved_ID, current->slot_time);
	printf("Press any key to continue...");
	getch();
}

void reserve_slot_menu() // main menu of reserve a time slot with the doctor
{
	system("cls");
	printf("Reserve a slot with the doctor:\n");
	printf("-------------------------------\n\n");
	printf("Available time slots: \n");
	printf("--------------------\n");
	for(time_slot *index = time_head ; index != NULL ; index = index->next)
	{
		if(index->reserved_flag == 0)
		{
			printf("%d. %s\n", index->slot_number, index->slot_time);
		}
	}
	printf("0. Cancel\n");
	u8 choice;
	printf("Enter slot number to reserve: ");
	scanf("%d", &choice);
	if(choice==0)
	{
		return;
	}
	reserve_time_slot(choice);
}

void initialize_timeslots() //initialization for time slots linked list nodes
{
	time_slot *slot1 = (time_slot*) malloc(sizeof(time_slot));
	time_slot *slot2 = (time_slot*) malloc(sizeof(time_slot));
	time_slot *slot3 = (time_slot*) malloc(sizeof(time_slot));
	time_slot *slot4 = (time_slot*) malloc(sizeof(time_slot));
	time_slot *slot5 = (time_slot*) malloc(sizeof(time_slot));
	// slot1
	strcpy(slot1->slot_time, "2PM to 2:30PM");
	slot1->reserved_flag = 0;
	slot1->slot_number = 1;
	slot1->reserved_ID = 0;
	time_head = slot1;
	slot1->next = slot2;
	// slot2
	strcpy(slot2->slot_time, "2:30PM to 3PM");
	slot2->reserved_flag = 0;
	slot2->slot_number = 2;
	slot2->reserved_ID = 0;
	slot2 -> next = slot3;
	// slot3
	strcpy(slot3->slot_time, "3PM to 3:30PM");
	slot3->reserved_flag = 0;
	slot3->reserved_ID = 0;
	slot3->slot_number = 3;
	slot3 -> next = slot4;
	// slot4
	strcpy(slot4->slot_time, "4PM to 4:30PM");
	slot4->reserved_flag = 0;
	slot4->reserved_ID = 0;
	slot4->slot_number = 4;
	slot4 -> next = slot5;
	// slot5
	strcpy(slot5->slot_time, "4:30PM to 5PM");
	slot5->reserved_flag = 0;
	slot5->reserved_ID = 0;
	slot5->slot_number = 5;
	slot5 -> next = NULL;
}

void remove_node(u32 remove_ID) // remove a patient record
{
	patient *current = head;
	patient *previous = head;
	while(current!=NULL)
	{
		if((current==head) && (current->next == NULL)) //base condition: if there is only one node
		{
			if(current->ID == remove_ID) // double checking that we are removing the right node
			{
				free(current);
				head=NULL;
				printf("Patient record removed successfully\n");
				printf("Press any key to continue...");
				getch();
			}
			break;
		}
		else
		{
			if(head->ID == remove_ID) // if ID is in first node
			{
				current = head->next;
				previous = head;
				head = current;
				free(previous);
				printf("Patient record removed successfully\n");
				printf("Press any key to continue...");
				getch();
				break;
			}
			if(current->ID == remove_ID) //if ID is not in first node check current, else move current to next node
			{
				previous->next = current->next;
				free(current);
				printf("Patient record removed successfully\n");
				printf("Press any key to continue...");
				getch();
				break;
			}
			else
			{
				previous = current;
				current = current->next;
			}
		}
	}
}

void remove_patient_record() //main menu of remove patient record
{
	while(1)
	{
		system("cls");
		printf("Remove patient record:\n");
		printf("----------------------\n");
		u8 choice;
		u32 entered_ID;
		printf("1.Display all patient records\n");
		printf("2.Choose a patient with his/her ID\n");
		printf("0.Exit remove mode\n");
		printf("Your entry: ");
		scanf("%d", &choice);
		patient *current = head;
		switch(choice)
		{
			case 1:
				display_as_table();
			break;
			
			case 2:
				printf("Enter ID: ");
				scanf("%d", &entered_ID);
				if(unique_ID_check(entered_ID))
				{
					printf("Error! ID not found\n");
					printf("Press any key to continue...");
					getch();
					break;
				}
				while(current!=NULL)
				{
					if(entered_ID == current->ID)
					{
						break;
					}
					current = current->next;
				}
				printf("ID Found!\n"); 
				printf("---------\n\n");
				printf("Are you sure you want to remove this client?\n");
				display_single_node(current);
				printf("Enter 1 to confirm deletion, 2 to cancel, 0 to go back to main menu\n");
				printf("Your entry: ");
				scanf("%d", &choice);
				switch(choice)
				{
					case 1:
						remove_node(entered_ID);
						export_patients_data();
					break;
					
					case 2:
						//do nothing
					break;
					
					case 0:
						return;
					break;
					
					default:
						printf("Wrong entry! operation canceled.\n");
						printf("Press any key to continue...");
						getch();
					break;
				}
			break;
			
			case 0:
				return;
		}
	}
}

void view_reserved_timeslots() // views reserved time slots
{
	system("cls");
	printf("Reserved time slots: \n");
	printf("-------------------\n");
	for(time_slot *index = time_head ; index != NULL ; index = index->next)
	{
		if(index->reserved_flag == 1)
		{
			printf("%d. %s \t ID: %d\n", index->slot_number, index->slot_time, index->reserved_ID);
		}
	}
}

void cancel_reservation(u8 slot_n) // cancel a reservation
{
	static u8 choice;
	time_slot *time_index = time_head;
	while(time_index != NULL)
	{
		if(time_index->slot_number == slot_n)
		{
			if(time_index->reserved_flag == 0)
			{
				printf("Error! Time slot is not reserved, please pick the correct one!\n");
				printf("Press any key to continue...");
				getch();
				return;
			}
			break;
		}
		time_index = time_index -> next;
	}
	printf("\nAre you sure you want to cancel this reservation?\n");
	printf("%d. %s \t ID: %d\n\n", time_index->slot_number, time_index->slot_time, time_index->reserved_ID);
	printf("Enter 1 to confirm cancelation, or 0 to cancel\n");
	printf("Your entry: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			time_index->reserved_flag = 0;
			time_index->reserved_ID = 0;
			printf("Success! Slot number %d is now canceled and free!\n", time_index->slot_number);
			printf("Press any key to continue...");
			getch();
			return;
		break;
		
		case 0:
			printf("Operation canceled!\n");
			printf("Press any key to continue...");
			getch();
			return;
		break;
		
		default:
			printf("Wrong entry! canceling operation.\n");
			printf("Press any key to continue...");
			getch();
			return;
		break;
	}	
}

void remove_reservation_menu() //main menu of cancel a reservation
{
	while(1)
	{
		system("cls");
		printf("Remove a reserved time slot:\n");
		printf("----------------------------\n\n");
		view_reserved_timeslots();
		printf("0. Back to main menu\n\n");
		printf("Enter slot number to cancel: ");
		static u8 user_choice;
		scanf("%d", &user_choice);
		if(user_choice<0 || user_choice>5)
		{
			printf("Error! Time slot was not found (did you enter a correct time slot number?)\n");
			printf("Press any key to continue...");
			getch();
			continue;
		}
		else if(user_choice==0)
		{
			return;
		}
		else
		{
			cancel_reservation(user_choice);
		}
	}
}