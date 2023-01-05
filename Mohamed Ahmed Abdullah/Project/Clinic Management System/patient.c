#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

#include "patient.h"

u16 id;
u8 *name;
u8 age;
u8 *gender;

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
                patients[i].name = name;
            }else if (attribute == 2){
                printf("Please enter new age: ");
                scanf("%d", age);
                patients[i].age = age;
            }else if (attribute == 3){
                printf("Please enter new gender: ");
                scanf("%s", gender);
                patients[i].gender = gender;
            }            
        }
    }
}

int is_patient_exist(u16 id){
    for (int i = 0; i < patients_no; i++)
    {
        if(patients[i].id == id){
            return 1;
        }
    }
    return 0;
}
