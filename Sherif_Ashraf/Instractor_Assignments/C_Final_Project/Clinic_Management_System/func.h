/* 

Author 				:		"Sherif_Ashraf"

Date                :		"5-1-2023"

Version             :		"v-1.0"

Program Description :		"Clinc Mangment System"

*/


#include"datatypes.h"

//======================================== patient functions headers ==================================

u16 login(void);
void exportData(void);
void importData(void);
u16 idExist(u16 idCheck);
void addNewRecord(void);
void insertNewPatientRecord(void);
void displayAllRecord(void);
void editPatientName(u16 patientId);
void editPatientGender(u16 patientId);
void editPatientAge(u16 patientId);
void editPatientRecord(void);
void deletePatientRecord(void);
void restorePatientRecord(void);

//========================================== slots functions headers =======================================

void importSlotsData(void);
void exportSlotsData(void);
u16 slotIdExist(u16 idSlotCheck);
void addNewReverseSlot(void);
void insertNewReverseSlot(void);
void displayAllSlots(void);
void reverseAvalibleSlot(void);
void cancelReversedSlot(void);
void resetAllSlotAvilableFlag(void);

//========================================= user functions headers ===========================================

void viewPatientRecord(void);
void viewTodayReservations(void);

//========================================== file Hnadling Function Headers ==================================================


void importAllData(void);
void exportAllData(void);