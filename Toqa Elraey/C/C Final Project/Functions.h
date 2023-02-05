#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "TypeDefs.h"

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

void Creatfirst(u8 nameptr[], u8 CopyAge, u8 genderptr[], u16 CopyID, f32 CopySlot);

void CreatLast(u8 nameptr[], u8 CopyAge, u8 genderptr[], u16 CopyID, f32 CopySlot);

void PatientDataBase(void);

void creatFirstSlot(f32 CopyTime);

void creatLastSlot(f32 CopyTime);

void SlotDataBase(void);

u8 checkPassword(void);

void ShowSlots(void);

void TodayReservations(void);

void ViewRecord(u16 CopyID);

void DeleteSlot(f32 CopySlot);

u8 IDcheck(u16 CopyID);

void AddNewPatient(u16 CopyID);

void EditName(u16 copyID);

void EditAge(u16 copyID);

void EditSlot(u16 copyID);

void EditPatientRecord(u16 CopyID);

void ReserveSlot(u16 CopyID);

void CancleSlot(u16 CopyID);

#endif