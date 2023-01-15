#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

#include "slot.h"

// Reserve a slot
void reserve_slot(u32 patient_id, u8 slot_num){   
    slots[slot_num].patient_id = patient_id;
}

// Cancel reservation by patient id
void cancel_reservation(u32 patient_id){
    for (int i = 0; i < SLOTS_SIZE; i++)
    {
        if (slots[i].patient_id == patient_id)
        {
            // Set patient id to 0 [Not Reserved]
            slots[i].patient_id = NOT_RESERVED;
        }       
    }
}

// Print all reservations
void print_all_reservations(){
    for (int i = 0; i < SLOTS_SIZE; i++)
    {
        if (slots[i].patient_id != NOT_RESERVED)
        {
            printf("Reservation %d: ",i);
            printf("From %d:%d ", slots[i].from[0], slots[i].from[1]);
            printf("To %d:%d ", slots[i].to[0], slots[i].to[1]);
            printf("-> Patient: %d", slots[i].patient_id); 
            printf("\n");
        }
    }
}

// Print available slots
void print_available_slot(){
    printf("The available reservations: \n");
    for (int i = 0; i < SLOTS_SIZE; i++)
    {
        if (slots[i].patient_id == NOT_RESERVED)
        {
            printf("Reservation %d: ",i);
            printf("From %d:%d ", slots[i].from[0], slots[i].from[1]);
            printf("To %d:%d ", slots[i].to[0], slots[i].to[1]);
            printf("\n");
        }       
    }
}