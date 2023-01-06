#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

#include "patient.h"

u16 id;
u8 *name;
u8 age;
u8 *gender;

extern u16 patients_no; // Change this i into number of student in your program

void add_patient(patient human){
    patients[patients_no] = human;
    patients_no++;
}

void edit_patient(u16 id, u8 attribute){
    for (int i = 0; i < patients_no; i++)
    {
        if(patients[i].id == id){
            if (attribute == 1){
                printf("Please enter new name: ");
                scanf("%s", name);
                for (int i = 0; i < NAME_MAX_SIZE; i++)
                {
                    patients[i].name[i] = name[i];
                }
            }else if (attribute == 2){
                printf("Please enter new age: ");
                scanf("%d", age);
                patients[i].age = age;
            }else if (attribute == 3){
                printf("Please enter new gender: ");
                scanf("%s", gender);
                for (int i = 0; i < GENDER_MAX_SIZE; i++)
                {
                    patients[i].gender[i] = gender[i];
                }
            }            
        }
    }
}

u8 is_patient_exist(u16 id){
    for (int i = 0; i < patients_no; i++)
    {
        if(patients[i].id == id){
            return 1;
        }
    }
    return 0;
}

patient get_patient_information(u16 id){
    for (int i = 0; i < patients_no; i++)
    {
        if (patients[i].id == id){
            return patients[i];
        }
    }
}