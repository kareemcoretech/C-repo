#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"types.h"
typedef struct m
{
	u8 name [100];
	u32 age;
	u8 gender[10];
	u32 id;
	struct m *next;	
}Node;
void Clinic_Records(void);
void Add_Patient(u8 name[],u32 age,u8 gender[],u32 id);
void Insert_At_Last(u8 name[],u32 age,u8 gender[],u32 id);
void Edit_Record(u32 id);
void Reservation(void);
void Cancel_Reservation(u32 d);
void Print_List(u32 id);
void Print_App(void);
//void Delete(u32 p);