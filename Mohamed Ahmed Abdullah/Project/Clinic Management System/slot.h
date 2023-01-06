#ifndef SLOT_H
#define SLOT_H
#include "STD_TYPES.h"

#define SLOTS_SIZE 5

typedef struct slot
{
    u16 patient_id; 
    u8 from[2];
    u8 to[2];
} slot;

// Initialization of slots list
slot slots[SLOTS_SIZE];

// Functions of slots
void reserve_slot(u16 patient_id, u8 slot_num);
void cancel_reservation(u16 patient_id);
void print_all_reservations();
void print_available_slot();

#endif