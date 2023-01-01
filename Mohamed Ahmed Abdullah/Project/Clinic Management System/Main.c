/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 1 1 2023 

- Project: Clinical Management System
*/

// Includes
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

#include "UI.h"
#include "patient.h"
#include "slot.h"

slot slot1 = {0,{2,0},{2,30}};
slot slot2 = {0,{2,30},{3,0}};
slot slot3 = {0,{3,0},{3,30}};
slot slot4 = {0,{3,30},{4,0}};
slot slot5 = {0,{4,0},{4,30}};

int main(void){
    patients = (patient*)malloc(patients_size*sizeof(patient));
    slots =  (slot*)malloc(slots_size*sizeof(slot));
    
    slots[0] = slot1;
    slots[1] = slot2;
    slots[2] = slot3;
    slots[3] = slot4;
    slots[4] = slot5;

    start();
    return 0;
}