#ifndef PATIENT_H
#define PATIENT_H

#include "STD_TYPES.h"

typedef struct patient
{
    u16 id;
    u8 *name;
    u8 age;
    u8 *gender;
} patient;

patient *patients = NULL;
u16 patients_no = 0;
u16 patients_size = 100;

void add_patient(patient human);
void edit_patient(u16 id, u8 attribute);
int is_patient_exist(u16 id);

#endif