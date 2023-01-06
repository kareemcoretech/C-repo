#ifndef PATIENT_H
#define PATIENT_H

#include "STD_TYPES.h"

#define PATIENTS_MAX_SIZE 100
#define NAME_MAX_SIZE 20
#define GENDER_MAX_SIZE 6

typedef struct patient
{
    u16 id;
    u8 name[NAME_MAX_SIZE];
    u8 age;
    u8 gender[GENDER_MAX_SIZE];
} patient;

// Initialization of patients list
patient patients[PATIENTS_MAX_SIZE];

// Functions of patients
void add_patient(patient human);
void edit_patient(u16 id, u8 attribute);
u8 is_patient_exist(u16 id);
patient get_patient_information(u16 id);

#endif