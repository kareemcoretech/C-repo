/* 

Author 				:		"Sherif_Ashraf"

Date                :		"5-1-2023"

Version             :		"v-1.0"

Program Description :		"Clinc Mangment System"

*/



#include<stdio.h>
#include"func.h"
#include"datatypes.h"
#include<stdlib.h>
#include<conio.h>

u16 main(void)
{
	system("cls"); // bultin function to clear cmd
	importData(); // this function to import all patient data from systemdata.txt file
	importSlotsData();// this function to import all slots data from systemslotsdata.txt file
	while(1) // while one loop to make program run without stop 
	{
		u16 roleChoice;
		u16 processChoice;
		printf("Current Date: %s\n\n",__DATE__);// date macro to print current date
     	printf("Current Time: %s\n\n",__TIME__);// time macro to print current time
		printf("Welcome In Clinc Mangment System \n");
		printf("Chosse Your Role [1 - Admin | 2 - User] \n");
		scanf("%d",&roleChoice);
		system("cls");

		switch(roleChoice)
		{	// switch case to chosse end user role 
			case 1:
{						// case 1 then user chosse admin role
						if(login()) // login function to take password of admin and check it
						{	
							processReChoiceAdmin:
							printf("Chosse What Is Your Process \n");// this is admin main menu
							printf("=========================================================== \n");
							printf("1  - Add New Patient Record\n");
							printf("2  - Edit Patient Record\n");
							printf("3  - Reserve A Slot With The Doctor\n");
							printf("4  - Cancel Reservation\n");
							printf("5  - Display All Patient Record\n");
							printf("6  - Add New Reverse Slot\n");
							printf("7  - Display All Reserve Slots\n");
							printf("8  - Cancel All Reserve Slots \n");
							printf("9  - Delete Patient Record \n");
							printf("10 - Restore Patient Record \n");
							printf("11 - Import All Recorded Data\n");
							printf("12 - Export All Recorded Data\n");
							printf("=========================================================== \n");
							printf("Enter Your Choice \n");
							scanf("%d",&processChoice);
							printf("=========================================================== \n");

							switch(processChoice)
							{  // nested switch to make user choice from the menu of admin role
								case 1:
									{
										insertNewPatientRecord();
										system("cls");
										break;
									}
								case 2:
									{
										editPatientRecord();
										system("cls");
										break;
									}
								case 3:
									{
										reverseAvalibleSlot();
										system("cls");
										break;
									}
								case 4:
									{
										cancelReversedSlot();
										system("cls");
										break;
									}
								case 5:
									{
										displayAllRecord();
										system("cls");
										break;
									}
								case 6:
									{
										insertNewReverseSlot();
										system("cls");
										break;
									}
								case 7:
									{
										displayAllSlots();
										system("cls");
										break;
									}
								case 8:
									{
										resetAllSlotAvilableFlag();
										system("cls");
										break;
									}
								case 9:
									{
										deletePatientRecord();
										system("cls");
										break;
									}
								case 10:
									{
										restorePatientRecord();
										system("cls");
										break;
									}
								case 11:
									{
										importAllData();
										system("cls");
										break;
									}
								case 12:
									{
										exportAllData();
										system("cls");
										break;
									}
								default:
									{
										printf("Wrong Choice Please Try Again... \n");
										goto processReChoiceAdmin;// if the user enter wrong choice will return to the admin role menu to rechosse
										break;
									}
							}
						  	break;
						}
					  	else
						{
							printf("Too Many Wrong Attempt Program Will Termnat...\n");
							return 0;
						}
					}
				case 2:
					{ // case user chosse user role 
						processReChoiceUser:
						printf("Chosse What Is Your Process \n"); // main menu for user role
						printf("=========================================================== \n");
						printf("1 - View Patient Record\n");
						printf("2 - View Today Reservations\n");
						printf("=========================================================== \n");
						printf("Enter Your Choice \n");
						scanf("%d",&processChoice);
						printf("=========================================================== \n");

						switch(processChoice)
						{ // nested switch for user role to chosse from his main menu
							case 1:
								{
									viewPatientRecord();
									break;
								}
							case 2:
								{
									viewTodayReservations();
									break;
								}
							default:
								{
									printf("Wrong Choice Please Try Again... \n");
									goto processReChoiceUser;// if the user enter wrong choice will return to the admin role menu to rechosse
									break;
								}
						}
						break;
					}
		}
	}
	exportData(); // export all new data of paitant to file before the program terminat 
	exportSlotsData();// export all new data of slots to file before the program terminat
}
