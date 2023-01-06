#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

#include "slot.h"


void reserve_slot(u16 patient_id, u8 slot_num){
    slots[slot_num].patient_id = patient_id;
}


void cancel_reservation(u16 patient_id){
    for (int i = 0; i < 5; i++)
    {
        if (slots[i].patient_id == patient_id)
        {
            slots[i].patient_id = 0;
        }       
    }
}

void print_all_reservations(){
    for (int i = 0; i < 5; i++)
    {
        printf("Reservation %d: ",i);
        printf("From %d:%d ", slots[i].from[0], slots[i].from[1]);
        printf("To %d:%d ", slots[i].to[0], slots[i].to[1]);
        printf("-> Patient: %d", slots[i].patient_id); 
        printf("\n");
    }
}

void print_available_slot(){
    printf("The available reservations: \n");
    for (int i = 0; i < 5; i++)
    {
        if (slots[i].patient_id != 0)
        {
            printf("Reservation %d: ",i);
            printf("From %d:%d ", slots[i].from[0], slots[i].from[1]);
            printf("To %d:%d ", slots[i].to[0], slots[i].to[1]);
            printf("\n");
        }       
    }
}