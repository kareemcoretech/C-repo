#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TypeDefs.h"

#define password 1234
#define NAME 'N'
#define AGE 'A'
#define SLOT 'S'

typedef struct st{
	u8 name[100];
	u8 age;
	u8 gender[10];
	u16 ID;
	f32 slot;
    struct st *Next;	
}Patient;

typedef struct sl{
	f32 time;
	struct sl *Next;
}avSlots;


Patient *Head = NULL;
avSlots *HeadS = NULL;

/* --------------------------------------------------------------
                     Definition of Functions
   -------------------------------------------------------------- */
void Creatfirst(u8 nameptr[], u8 CopyAge, u8 genderptr[], u16 CopyID, f32 CopySlot){
	Patient *first = (Patient*)malloc(sizeof(Patient));
	strcpy(first -> name, nameptr);
	first -> age = CopyAge;
	strcpy(first -> gender, genderptr);
	first -> ID = CopyID;
	first -> slot = CopySlot;
	first -> Next = NULL;
	Head = first;
}

void CreatLast(u8 nameptr[], u8 CopyAge, u8 genderptr[], u16 CopyID, f32 CopySlot){
	Patient *last = (Patient*)malloc(sizeof(Patient));
	Patient *check = Head;
	while(check -> Next != NULL){
		check = check -> Next;
	}
	strcpy(last -> name, nameptr);
	last -> age = CopyAge;
	strcpy(last -> gender, genderptr);
	last -> ID = CopyID;
	last -> slot = CopySlot;
	last -> Next = NULL;
	check -> Next = last;
}

void PatientDataBase(void){
	u8 namem[] = "Eslam";
	u8 agem = 27;
	u8 genderm[] = "Male";
	u16 IDm = 1111;
	f32 slotm = 12.30;
	Creatfirst(namem, agem, genderm, IDm, slotm);
	
	u8 namem1[] = "Eman";
	agem = 23;
    u8 genderm1[] = "Female";
	IDm = 1112;
	slotm = 1.00;
	CreatLast(namem1, agem, genderm1, IDm, slotm);
	
	u8 namem2[] = "Ahmed";
	agem = 42;
	u8 genderm2[] = "Male";
	IDm = 1113;
	slotm = 3.30;
	CreatLast(namem2, agem, genderm2, IDm, slotm);
}

void creatFirstSlot(f32 CopyTime){
	avSlots *firstSlot = (avSlots*)malloc(sizeof(avSlots));
	firstSlot -> time = CopyTime;
	firstSlot -> Next = NULL;
	HeadS = firstSlot;
}

void creatLastSlot(f32 CopyTime){
	avSlots *lastSlot = (avSlots*)malloc(sizeof(avSlots));
	avSlots *check = HeadS;
	while(check -> Next != NULL){
		check = check -> Next;
	}
	lastSlot -> time = CopyTime;
	lastSlot -> Next = NULL;
	check -> Next = lastSlot;
}

void SlotDataBase(void){
	f32 time;
	
	time = 2.00;
	creatFirstSlot(time);
	
	time = 2.30;
	creatLastSlot(time);
	
	time = 3.00;
	creatLastSlot(time);
	
	time = 4.00;
	creatLastSlot(time);
	
	time = 4.30;
	creatLastSlot(time);
}

u8 checkPassword(void){
	u16 UserPassword;
	u8 flag = 0;
	
	printf("Please enter the password: ");
	scanf("%d", &UserPassword);
	
	if(UserPassword == password){
		flag = 1;
	}
	else{
		printf("Incorrect Password, Try again: ");
		scanf("%d", &UserPassword);
		if(UserPassword == password){
			flag = 1;
		}
		else{
			printf("Incorrect Password, Try again: ");
			scanf("%d", &UserPassword);
			if(UserPassword == password){
				flag = 1;
			}
		}
	}
	return flag;
}

void ShowSlots(void){
	avSlots *showSlot = HeadS;
	while(showSlot != NULL){
		printf("%.2f\n", showSlot->time);
		showSlot = showSlot -> Next;
	}
}

void TodayReservations(void){
	Patient *check = Head;
	while(check != NULL){
		if(check -> slot != 0){
			printf("Name: %s\n", check->name);
			printf("Age: %d\n", check->age);
			printf("Gender: %s\n", check->gender);
			printf("ID: %d\n", check->ID);
			printf("Slot: %.2f\n", check->slot);
		}
		check = check -> Next;
	}
}

void ViewRecord(u16 CopyID){
	Patient *check = Head;
	while(check != NULL){
		if(check -> ID == CopyID){
			printf("%s\n", check -> name);
			printf("%d\n", check -> age);
			printf("%s\n", check -> gender);
			printf("%.2f\n", check -> slot);
			break;
		}
		check = check -> Next;
	}
}

void DeleteSlot(f32 CopySlot){
	avSlots *pre = HeadS;
	avSlots *check = HeadS;
	avSlots *next = HeadS;
	
	while(check != NULL){
		next = check -> Next;
		if(check -> time == CopySlot){
			if(pre == check){
				HeadS = next;
				free(check);
				break;
			}
			else if(check -> Next == NULL){
				pre -> Next = NULL;
				free(check);
				break;
			}
			else{
				pre -> Next = next;
				free(check);
				break;
			}
		}
		pre = check;
		check = check -> Next;
	}
}

void AddSlot(f32 CopySlot){
	avSlots *pre = HeadS;
	avSlots *next = HeadS;
	avSlots *new = (avSlots*)malloc(sizeof(avSlots));
	while(pre != NULL){
		next = pre -> Next;
		if(pre -> time < CopySlot && next -> time > CopySlot){
			new -> time = CopySlot;
			new -> Next = next;
			pre -> Next = new;
			break;
		}
		else if(CopySlot < pre -> time){
			new -> time = CopySlot;
			new -> Next = pre;
			HeadS = new;
			break;
		}
		else if(next -> Next == NULL && next -> time < CopySlot){
			new -> time = CopySlot;
			new -> Next = NULL;
			next -> Next = new;
			break;
		}
		pre = pre -> Next;
		next = pre -> Next;
	}
}

u8 IDcheck(u16 CopyID){
	u8 flag = 0;
	Patient *checkID = Head;
	while(checkID != NULL){
		if(checkID -> ID == CopyID){
			flag = 1;
			break;
		}
		checkID = checkID -> Next;
	}
	return flag;
}

void AddNewPatient(u16 CopyID){
	static u8 Copyname[50];
	u8 CopyAge;
	static u8 Copygender[10];
	static u16 copyID;
	f32 CopySlot = 0;
	
	copyID = CopyID;
	printf("ID: %d\n", copyID);
	printf("Please enter the First name: ");
	scanf("%s", Copyname);
	printf("Please enter the Gender: ");
	scanf("%s", Copygender);
	printf("Please enter the Age: ");
	scanf("%d", &CopyAge);
	
	CreatLast(Copyname, CopyAge, Copygender, copyID, CopySlot);
	
	printf("The New Patient is Added.\n");
}

void EditName(u16 copyID){
	Patient *editCheck = Head;
	while(editCheck != NULL){
		if(editCheck -> ID == copyID){
			break;
		}
		editCheck = editCheck -> Next;
	}
	
	u8 editname[50];
	printf("Please enter the Edited Name: ");
	scanf("%s", editname);
	strcpy(editCheck -> name, editname);
}

void EditAge(u16 copyID){
	Patient *editCheck = Head;
	while(editCheck != NULL){
		if(editCheck -> ID == copyID){
			break;
		}
		editCheck = editCheck -> Next;
	}
	
	printf("Please enter the edited age: ");
	scanf("%d", &editCheck->age);
}

void EditSlot(u16 copyID){
	Patient *editCheck = Head;
	while(editCheck != NULL){
		if(editCheck -> ID == copyID){
			break;
		}
		editCheck = editCheck -> Next;
	}
	
	f32 temp;
	f32 editSlot;
	
	temp = editCheck -> slot;
	ShowSlots();
	printf("Please choose the new Slot: ");
	scanf("%f", &editSlot);
	editCheck -> slot = editSlot;
	DeleteSlot(editSlot);
	AddSlot(temp);
	ShowSlots();
}

void EditPatientRecord(u16 CopyID){
	u8 parameter;
	f32 temp;
	static u16 copyID;
	copyID = CopyID;
	
	printf("Press 'N' if you want to edit the name\n");
	printf("Press 'A' if you want to edit the age\n");
	printf("Press 'S' if you want to edit the slot\n");
	scanf(" %c", &parameter);
	
	switch(parameter){
		
		case(NAME):
		EditName(copyID);
		break;
	
		case(AGE):
		EditAge(copyID);
		break;
		
		case(SLOT):
		EditSlot(copyID);
		break;
	}
	TodayReservations();
	printf("The Patient's Record is edited. \n");
}

void ReserveSlot(u16 CopyID){
	f32 CopySlot;
	Patient *check = Head;
	printf("The Avaliable Slots: \n");
	ShowSlots();
	printf("Please enter the Slot you want to Reserve: ");
	scanf("%f", &CopySlot);
	while(check != NULL){
		if(check->ID == CopyID){
			check -> slot = CopySlot;
			DeleteSlot(CopySlot);
			printf("The slot is reserved.\n");
			break;
		}
		check = check -> Next;
	}
}

void CancleSlot(u16 CopyID){
	u8 flag = 0;
	f32 temp;
	Patient *check = Head;
	while(check != NULL){
		if(check -> ID == CopyID && check -> slot != 0){
			temp = check -> slot;
			check -> slot = 0;
			AddSlot(temp);
			printf("The Reservation is Cancelled.");
			flag = 1;
			break;
		}
		check = check -> Next;
	}
	
	if(flag == 0){
		printf("This ID has no reservations\n");
	}
}
