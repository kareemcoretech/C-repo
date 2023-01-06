#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"

#include "patient.h"
#include "slot.h"
#include "UI.h"
#include "Config.h"

// Admin mode
#define ADD_PATIENT 1
#define EDIT_PATIENT 2
#define RESERVE_SLOT 3
#define CANCEL_RESERVATION 4
// User mode
#define VIEW_PATIENT 1
#define VIEW_RESERVATION 2

#define BACK -1

s8 choice;
u8 status = 1;

u16 id;
u8 *name;
u8 age;
u8 *gender;
u8 slot_num;


void admin_mode(){
    u16 is_logged = login();
    while(status)
    {
        if(is_logged){
            printf("1- Add new patient record\n");
            printf("2- Edit patient record\n");
            printf("3- Reserve a slot with the doctor\n");
            printf("4- Cancel reservation\n");
            printf("To return press -1 ...\n");

            printf("\n");
            printf("Enter the operation number you want to do: ");
            scanf("%d", &choice);

            patient new_patient;
            switch (choice)
            {
            case ADD_PATIENT:
                printf("Please, Enter patient ID: ");
                scanf("%d",&new_patient.id);
                printf("Please, Enter patient name: ");
                scanf("%s", &new_patient.name);
                printf("Please, Enter patient age: ");
                scanf("%d", &new_patient.age);
                printf("Please, Enter patient gender (male or female): ");
                scanf("%s", &new_patient.gender);
                add_patient(new_patient);
                printf("Added new patent is done. \n\n", id);
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
                    scanf("%d", &choice);

                    edit_patient(id, choice);
                }
                printf("Patient %d information edited. \n", id);
                break;
            case RESERVE_SLOT:
                print_available_slot();
                printf("Please, Enter patient ID: ");
                scanf("%d", &id);
                printf("Please, Enter slot you want to reserve: ");
                scanf("%d", &slot_num);
                reserve_slot(id,slot_num);
                break;
            case CANCEL_RESERVATION:
                printf("Please, Enter patient ID: ");
                scanf("%d", &id);
                cancel_reservation(id);
                printf("Reservation of patient %d cancelled. \n", id);
                break;
            case BACK:
                status = 0;
                break;
            default:
                exit(0);
                break;
            }
        }
        else{
            printf("Sorry, you entered the password 3 times wrong !\n");
            printf("Good Bye");
            exit(-1);
        }
    }
}

u16 login(){
    u16 password_entered;
    int i = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Please, Enter the password: ");
        scanf("%d", &password_entered);

        if(password_entered == PASSWORD){
            printf("\nWelcome to admin mode.. \n");
            printf("===========================\n");
            return 1;
        }
    }    
    return 0;
}

void user_mode(){
    while(status)
    {
        printf("1- View patient record\n");
        printf("2- View today's reservations\n");
        printf("To return press -1 ...\n");
        printf("\n");
        printf("Enter the operation number you want to do: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case VIEW_PATIENT:
            printf("Enter patient id: ");
            scanf("%d", &choice);
            patient founded_patient = get_patient_information(choice);
            printf("Patient id:     %d\n", founded_patient.id);
            printf("Patient name:   %s\n", founded_patient.name);
            printf("Patient age:    %d\n", founded_patient.age);
            printf("Patient gender: %s\n", founded_patient.gender);
            break;
        case VIEW_RESERVATION:
            print_all_reservations();
            break;
        case BACK:
            status = 0;
            break;
        default:
            break;
        }
    }
}