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

#define ADMIN 1
#define USER 2
s8 choice;
u8 status = 1;

u16 patients_no = 0;

// TODO: Error in definations and calling files
void main(void){   
    slot slot_1 = {0,{2,0},{2,30}};
    slot slot_2 = {0,{2,30},{3,0}};
    slot slot_3 = {0,{3,0},{3,30}};
    slot slot_4 = {0,{3,30},{4,0}};
    slot slot_5 = {0,{4,0},{4,30}};

    slots[0] = slot_1;
    slots[1] = slot_2;
    slots[2] = slot_3;
    slots[3] = slot_4;
    slots[4] = slot_5;

    printf("\nWelcome To:\n");
    printf("Clinic Management System\n");
    printf("----------------------------\n\n");

    while(status)
    {
        printf("1- Admin \n");
        printf("2- User \n");
        printf("Admin or User? ");
        scanf("%d", &choice);
        switch (choice)
        {
            case ADMIN:
                admin_mode();
                break;
            case USER:
                user_mode();
                break;
            default:
                exit(0);
                break;
        }
    }
    
   return;
}