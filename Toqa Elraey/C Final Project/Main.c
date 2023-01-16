#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Functions.h"
#include "TypeDefs.h"

#define password 1234
#define TRUE 1
#define FALSE 0
#define AdminMode 'A'
#define UserMode 'U'

#define AddNewPatientRecord 'A'
#define EditRecord 'E'
#define ReserveAnAppointment 'R'
#define CancelAnAppointment 'C'

#define ViewPatientRecord 'P'
#define ViewTodayReservation 'T'

int main(){
	PatientDataBase();
	SlotDataBase();
	
	while(1){
		u8 mode, PasswordCheck, featureU, featureA, IfIDExits;
		u16 userID;
		
		printf("Please enter 'A' for Admin Mode, or 'U' for User Mode: ");
		scanf(" %c", &mode);
		
		switch(mode){
			
			case(AdminMode):
			PasswordCheck = checkPassword();
			if(PasswordCheck == TRUE){
				printf("Password is right..\n");
				printf("Please enter 'A' to Add New Patient, 'E' to Edit Patient's Record, 'R' to Reserve an Appointment, or 'C' to Cancel an Appointment: ");
				scanf(" %c", &featureA);
				
				switch(featureA){
					
					case(AddNewPatientRecord):
					printf("Please enter the new ID: ");
					scanf("%d", &userID);
					IfIDExits = IDcheck(userID);
					
					if(IfIDExits == FALSE){
						AddNewPatient(userID);
						
					}
					else{
						printf("ID already exits.\n");
					}
					break;
					
					case(EditRecord):
					printf("Please enter the new ID: ");
					scanf("%d", &userID);
					IfIDExits = IDcheck(userID);
					
					if(IfIDExits == TRUE){
						EditPatientRecord(userID);
					}
					else{
						printf("ID doesnt exit.\n");
					}
					break;
					
					case(ReserveAnAppointment):
					printf("Please enter the ID: ");
					scanf("%d", &userID);
					IfIDExits = IDcheck(userID);
					
					if(IfIDExits == TRUE){
						ReserveSlot(userID);
					}
					else{
						printf("ID doesnt exit.\n");
					}
					break;
					
					case(CancelAnAppointment):
					printf("Please enter the ID: ");
					scanf("%d", &userID);
					IfIDExits = IDcheck(userID);
					
					if(IfIDExits == TRUE){
						CancleSlot(userID);
					}
					else{
						printf("ID doesnt exit.\n");
					}
					break;
				}
			}
			else{
				printf("Incorrect Password 3 consecutive times.");
			}
			break;
			
			case(UserMode):
			printf("Please enter 'P' for View a Patient Record, or 'T' for see today's Reservations:  ");
			scanf(" %c", &featureU);
			
			switch(featureU){
				case(ViewPatientRecord):
				printf("Please enter the ID: ");
				scanf("%d", &userID);
				ViewRecord(userID);
				break;
				
				case(ViewTodayReservation):
				TodayReservations();
				break;
			}
			break;
		}
	}
}