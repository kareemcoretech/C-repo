#ifndef SLOT_H
#define SLOT_H
#include "STD_TYPES.h"

#define SLOTS_SIZE 5 // Number of slots
#define NOT_RESERVED 0  // Not reserved flag

typedef struct slot
{
    u32 patient_id; 
    u8 from[2];
    u8 to[2];
} slot;

// Initialization of slots list
slot slots[SLOTS_SIZE];

/* Functions of slots */

// Reserve a slot
void reserve_slot(u32 patient_id, u8 slot_num);
// Cancel reservation
void cancel_reservation(u32 patient_id);
// Print all reservations
void print_all_reservations();
// Print available slots
void print_available_slot();

#endif