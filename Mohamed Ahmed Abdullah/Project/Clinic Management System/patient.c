#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

#include "patient.h"

#define CHANGE_ID 1
#define CHANGE_NAME 2
#define CHANGE_AGE 3
#define CHANGE_GENDER 4

// Scanf variables
u32 id;
u8 *name;
u8 age;
u8 *gender;

extern u16 patients_no; // Number of current patients in DB

// Add new patient to patients array
void add_patient(patient human){
    patients[patients_no] = human;
    patients_no++;
}

// Edit attribute of patient by id
void edit_patient(u32 id, u8 attribute){
    for (int i = 0; i < patients_no; i++)
    {
        if(patients[i].id == id){
            // Check which attribute to change
            if (attribute == CHANGE_ID){
                printf("Please, enter new id: ");
                scanf("%d", &patients[i].id);
            }else if (attribute == CHANGE_NAME)
            {
                printf("Please, enter new name: ");
                scanf("%s", patients[i].name);            
            }else if (attribute == CHANGE_AGE){
                printf("Please, enter new age: ");
                scanf("%d", &patients[i].age);
            }else if (attribute == CHANGE_GENDER){
                printf("Please, enter new gender: ");
                scanf("%s", patients[i].gender);
            }            
        }
    }
}

// Check if patient exist by id
u8 is_patient_exist(u32 id){
    for (int i = 0; i < patients_no; i++)
    {
        if(patients[i].id == id){
            // Return 1 [True] if patient exist
            return 1;
        }
    }
    // Return 0 [False] if patient not exist
    return 0;
}

// Get patient information by id
patient get_patient_information(u32 id){
    for (int i = 0; i < patients_no; i++)
    {
        if (patients[i].id == id){
            // Return patient information
            return patients[i];
        }
    }
}