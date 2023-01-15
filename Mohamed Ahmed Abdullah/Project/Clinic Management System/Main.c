/*
- Author: Mohamed Ahmed Abdullah
- Version : 2.0
- Date: 07 01 2023 

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

u16 patients_no = 0;

void main(void){   
    // Initialize slots
    // {patient_id, {from_hour, from_minute}, {to_hour, to_minute}}
    slot slot_1 = {NOT_RESERVED,{2,0},{2,30}}; // 2:00 - 2:30
    slot slot_2 = {NOT_RESERVED,{2,30},{3,0}}; // 2:30 - 3:00
    slot slot_3 = {NOT_RESERVED,{3,0},{3,30}}; // 3:00 - 3:30
    slot slot_4 = {NOT_RESERVED,{3,30},{4,0}}; // 3:30 - 4:00
    slot slot_5 = {NOT_RESERVED,{4,0},{4,30}}; // 4:00 - 4:30

    // Add slots to slots array
    slots[0] = slot_1;
    slots[1] = slot_2;
    slots[2] = slot_3;
    slots[3] = slot_4;
    slots[4] = slot_5;

    /* Start of UI */
    printf("\nWelcome To:\n");
    printf("Clinic Management System\n");
    printf("----------------------------\n\n");

    while(1)
    {
        printf("1- Admin \n");
        printf("2- User \n");
        printf("Admin or User? ");

        // Get user choice
        scanf("%d", &choice);
        switch (choice)
        {
            case ADMIN: // Admin mode
                admin_mode();
                break;
            case USER: // User mode
                user_mode();
                break;
            default: // Exit
                exit(0);
                break;
        }
    }
    /* End of UI */

    return;
}