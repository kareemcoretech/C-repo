#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"

#include "patient.h"
#include "slot.h"
#include "UI.h"

#define PASSWORD 1234

#define ADMIN 1
#define USER 2

#define ADD_PATIENT 1
#define EDIT_PATIENT 2
#define RESERVE_SLOT 3
#define CANCEL_RESERVATION 4

u8 choice;
u16 id;
u8 *name;
u8 age;
u8 *gender;

void start(){    
    printf("Welcome To:");
    printf("\nClinic Management System\n\n");

    printf("----------------------------\n");
    printf("1- Admin \n");
    printf("2- User \n");
    printf("Admin or User? ");
    scanf("%d", choice);

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

void admin_mode(){
    if(login()){
        printf("1- Add new patient record\n");
        printf("2- Edit patient record\n");
        printf("3- Reserve a slot with the doctor\n");
        printf("4- Cancel reservation\n");
        printf("\n");
        printf("Enter the operation number you want to do: ");

        patient new_patient;
        switch (choice)
        {
        case ADD_PATIENT:
            printf("Please, Enter patient ID: ");
            scanf("%d",&new_patient.id);
            printf("Please, Enter patient name: ");
            scanf("%s", new_patient.name);
            printf("Please, Enter patient age: ");
            scanf("%d", &new_patient.age);
            printf("Please, Enter patient gender (male or female): ");
            scanf("%s", new_patient.gender);
            add_patient(new_patient);
            break;
        case EDIT_PATIENT:
            printf("Please, Enter patient ID: ");
            scanf("%d", &id);
            if (is_patient_exist(id))
            {
                printf("1- Name\n");
                printf("2- Age\n");
                printf("3- Gender\n");

                printf("Choose attribute you want to edit: ");
                scanf("%d",choice);

                edit_patient(id, choice);
            }
            
            break;
        case RESERVE_SLOT:
            /* code */
            break;
        case CANCEL_RESERVATION:
            /* code */
            break;
        default:
            exit(0);
            break;
        }
    }else{
        exit(-1);
    }
}

int login(){
    u16 password_entered;
    for (int i = 0; i < 3; i++)
    {
        printf("Please, Enter the password: ");
        scanf("%d", password_entered);

        if(password_entered == PASSWORD){
            printf("Welcome !!\n");
            return 1;
        }
    }
    return 0;
}

void user_mode(){
    
}