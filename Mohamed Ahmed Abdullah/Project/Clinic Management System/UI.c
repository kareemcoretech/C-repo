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

#define BACK -1 // Back
#define EXIT -2 // Exit

#define TRIALS_NUMBER 3 // Number of trials to login

// Global variables
s8 choice;
u8 status = 1; // To return to main menu

// Scanf buffers
u32 id;
u8 *name;
u8 age;
u8 *gender;
u8 slot_num;

void admin_mode(){
    // Login to admin mode
    u8 is_logged = login();

    status = 1;
    while(status)
    {
        if(is_logged){ 
            // If login is successful
            
            // Print admin menu
            printf("\n");
            printf("1- Add new patient record\n");
            printf("2- Edit patient record\n");
            printf("3- Reserve a slot with the doctor\n");
            printf("4- Cancel reservation\n");
            printf("To return press -1 ...\n");
            printf("\n");

            // Get choice
            printf("Enter the operation number you want to do: ");
            scanf("%d", &choice);

            patient new_patient;
            switch (choice)
            {
            case ADD_PATIENT: // Add new patient
                printf("Please, Enter patient ID: ");
                scanf("%d",&new_patient.id);
                printf("Please, Enter patient name: ");
                scanf("%s", new_patient.name);
                printf("Please, Enter patient age: ");
                scanf("%d", &new_patient.age);
                printf("Please, Enter patient gender (male or female): ");
                scanf("%s", new_patient.gender);

                add_patient(new_patient);
                printf("Patient %d is added. \n", new_patient.id);
                break;
            case EDIT_PATIENT: // Edit patient
                printf("Please, Enter patient ID: ");
                scanf("%d", &id);
                if (is_patient_exist(id))
                {
                    // If patient is found
                    printf("1- Id\n");
                    printf("2- Name\n");
                    printf("3- Age\n");
                    printf("4- Gender\n");

                    printf("Choose attribute you want to edit: ");
                    scanf("%d", &choice);

                    edit_patient(id, choice);
                    printf("Patient %d information edited. \n", id);
                }else{
                    // If patient is not found
                    printf("Patient not found !\n");
                }
                break;
            case RESERVE_SLOT: // Reserve slot
                print_available_slot();
                printf("Please, Enter patient ID: ");
                scanf("%d", &id);
                if (is_patient_exist(id))
                {
                    // If patient is found
                    printf("Please, Enter slot you want to reserve: ");
                    scanf("%d", &slot_num);
                    reserve_slot(id,slot_num);
                }else{
                    // If patient is not found
                    printf("Patient not found !\n");
                }
                break;
            case CANCEL_RESERVATION: // Cancel reservation
                printf("Please, Enter patient ID: ");
                scanf("%d", &id);
                if (is_patient_exist(id))
                {
                    // If patient is found
                    cancel_reservation(id);
                    printf("Reservation of patient %d cancelled. \n", id);
                }else{
                    // If patient is not found
                    printf("Patient not found !\n");
                }
                break;
            case BACK: // Return to main menu
                status = 0;
                break;
            default: // Wrong choice -> Exit
                exit(0);
                break;
            }
        }
        else{
            // If login is not successful 3 times
            printf("Sorry, you entered the password 3 times wrong !\n");
            printf("Good Bye");
            exit(-1);
        }
    }
}

u8 login(){
    u16 password_entered;
    for (int i = 0; i < TRIALS_NUMBER; i++)
    {   
        // Get password
        printf("Please, Enter the password: ");
        scanf("%d", &password_entered);

        // Check password
        if(password_entered == PASSWORD){
            // If password is correct
            printf("\nWelcome to admin mode.. \n");
            printf("===========================\n");
            return 1;
        }
    }    
    // If password is wrong 3 times
    return 0;
}

void user_mode(){
    status = 1;
    while(status)
    {
        // Print user menu
        printf("\n");
        printf("1- View patient record\n");
        printf("2- View today's reservations\n");
        printf("To return press -1 ...\n");
        printf("\n");

        // Get choice
        printf("Enter the operation number you want to do: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case VIEW_PATIENT: // View patient information by id
            printf("Enter patient id: ");
            scanf("%d", &id);

            printf("Searching for patient with id = %d ...\n", id);

            // Get patient information
            if (is_patient_exist(id))
            {
                // If patient is found
                patient founded_patient = get_patient_information(id);
                printf("Patient id:     %d\n", founded_patient.id);
                printf("Patient name:   %s\n", founded_patient.name);
                printf("Patient age:    %d\n", founded_patient.age);
                printf("Patient gender: %s\n", founded_patient.gender);
            }else{
                // If patient is not found
                printf("Patient not found !\n");
            }
            break;
        case VIEW_RESERVATION: // View today's reservations
            print_all_reservations();
            break;
        case BACK: // Return to main menu
            status = 0;
            break;
        default: // Wrong choice -> Exit
            exit(0);
            break;
        }
    }
}