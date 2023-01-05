#ifndef SLOT_H
#define SLOT_H

#include "STD_TYPES.h"

typedef struct slot
{
    u16 patient_id; 
    u8 from[2];
    u8 to[2];
} slot;

slot *slots = NULL;
u16 slots_size = 5;

void reserve_slot(u16 patient_id, u8 slot_num);
void cancel_reservation(u16 patient_id);

#endif