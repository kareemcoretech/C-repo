#ifndef PATIENT_H
#define PATIENT_H

#include "STD_TYPES.h"

#define PATIENTS_MAX_SIZE 100 // Change this into max number of patients in your program
#define NAME_MAX_SIZE 20 // Change this into max number of characters in patient name
#define GENDER_MAX_SIZE 6

#define NOT_FOUND_ID 0 // Return this if patient not found

// Patient structure
typedef struct patient
{
    u32 id;
    u8 name[NAME_MAX_SIZE];
    u8 age;
    u8 gender[GENDER_MAX_SIZE];
} patient;

// Initialization of patients list
patient patients[PATIENTS_MAX_SIZE];


/* Functions of patients */
// Add new patient
void add_patient(patient human);
// Edit patient
void edit_patient(u32 id, u8 attribute);
// Check if patient exist
u8 is_patient_exist(u32 id);
// Get patient information
patient get_patient_information(u32 id);

#endif