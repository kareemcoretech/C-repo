#include <stdio.h>
#include"types.h"

u16 slot[11]={0};           //{slot1,slot2,slot3,slot4,slot5,ID1,ID2,ID3,ID4,ID5,temp}

typedef struct      // New Datatype for patient Information
{
	u8 Name[20];
	u8 Age ;
	u8 Gender;
	u16 ID;
}New_Patient;


void PASSWORD (void);
void Add_Patient(New_Patient patient[]);
void Edit(New_Patient patient[]);
void Reservation (New_Patient patient[]);
void clearing (New_Patient patient[]);
void view_Patient_Record (New_Patient patient[]);
void Show_Reservations(void);


int main ()
{ u8 Admin_option,User_option,select_mode ;
  New_Patient patient[5]={0};
  
  printf("Select The Mode for Admin press 1 for User press 2 :");
  scanf("%d",&select_mode);
  switch(select_mode)
             {
	             case(1):
  
                 PASSWORD();
  
  while(1)
  {
             printf("Press 1 to Add new patient\nPress 2 to Edit patient record\n");
             printf("Press 3 to Reserve a slot with the doctor\nPress 4 to cancel reservation\n");
             scanf("%d",&Admin_option);
  switch(Admin_option){
             case(1):{
	                   Add_Patient(patient);
                       break;
                     }
             case(2): {
	                    Edit(patient);
                        break;
                       }
             case(3):{
                        Reservation(patient);
                        break;
                     }
             case(4):
                      {
	                   clearing (patient);
                       break;
                      }

     }
    
       	}
   
          
		  
                 case (2):
				 {
	 while (1){				 
					 printf("press 1 to view patient record\n");
					 printf("press 2 to see today's reservation\n");
					 scanf("%d",&User_option);
  switch(User_option){
	           case(1):{
				   view_Patient_Record (patient);
				   break;   
			   }
			   case(2):{
				   Show_Reservations();
				   break;
			   }
  }
	 }
		}
			}  
}



void PASSWORD (void)
{
	u16 pass;
	printf("Enter the password : ");
	scanf("%d",&pass);

  
		
 if (pass != 1234)
	{   
			printf ("Re-Enter the password:");
			scanf("%d",&pass);
        if (pass != 1234)
         {   
			printf ("Re-Enter the password:");
			scanf("%d",&pass);
   		}
		if (pass != 1234)
		{   
			printf ("Fokak");
		}
	}
if (pass == 1234)
		{			
			printf("welcome Admin\n");
		}
}



void Add_Patient(New_Patient patient[])
{
	
	for (u8 i=0;i<5;i++)
	{
	 printf("Enter the New patient: ");
	 scanf("\n");
     scanf("%[^\n]%*c",&patient[i].Name);   //NAME
	 
	 printf("Enter the Age : ");
	 scanf("%d",&patient[i].Age);  //AGE
	 
	 printf("Enter the Gender M/F: ");   //GENDER
	 scanf("\n");
	 scanf("%c",&patient[i].Gender);
	 
	 printf("Enter the ID : ");   // ID 
	 scanf("%d",&patient[i].ID);
	 
	 for (u8 j=0 ; j<5 ; j++)			//checking ID
			{
				if(patient[i].ID == patient[j].ID && j!= i)
				{
					printf("Re-enter ID\n");		
					scanf("%d", &patient[i].ID);
					break;
				}
			}

			break;
		}
}
		
void Edit(New_Patient patient[])
{
	u16 ID;
	u8 flag=0;
	printf("Enter User ID\n");
	scanf("%d",&ID);
	
	
	for (int i = 0; i<5 ; i++)
	{
		if (ID == patient[i].ID )
		{
			printf("Enter User name\n");		//Edit----name
			scanf("\n");
			scanf("%[^\n]s", &patient[i].Name );

			printf("Enter User age\n");		//Edit-----Age
			scanf("%d", &patient[i].Age);
			
			printf("Enter User gender(M/F)\n");		//Edit-----Gender
			scanf("\n");			
			scanf("%c", &patient[i].Gender);
			flag=1;
		}
	}
	if (flag==0)
		printf("incorrect ID message");
}




void Reservation (New_Patient patient[])
{
 u8 flag=0;
 u16 ID,Index; 
 //u16 slot[11]={0};           //{slot1,slot2,slot3,slot4,slot5,ID1,ID2,ID3,ID4,ID5,temp}
 
 printf("Enter the Patient ID : ");
 scanf("%d",&slot[10]);
 
 
 
 for (u8 i=0 ;i<5 ;i++)
 {
	 if (slot[10] == patient[i].ID){
		 flag=1;
 }
}
 if (flag==0)
 {
	 printf("This patient not exist please choose Add new Patient ");
	 
 }
 else
 { 
	 printf( "Please Reserve A Slot: press 1 for 2pm to 2:30pm\n");
    printf( "                        press 2 for 2:30pm to 3pm\n");
	printf( "                        press 3 for 3pm to 3:30pm\n");
	printf( "                        press 4 for 3:30pm to 4pm\n");
	printf( "                        press 5 for 4pm to 5:30pm\n");
	printf("The available slots : \n");
 
 for (u8 i=0; i<5;i++)
 {
	 if (slot[i]==0)
	 {
		 printf( " press %d for Reserving slot %d \n",i+1,i+1);
	 }
 }
	 scanf("%d",&Index);
	 
	 if (slot[Index-1]==0 && slot[Index+4]==0 )    // for slot
		 
		{
			slot[Index-1] = 1;
            slot[Index+4] = slot[10];		
   
		}
		else
		{
			printf("Not Available");			
		}
		
	
	
		

		for (u8 i=0 ; i<5 ; i++)				//printing patient slot
		{
			if ( ID != patient[i].ID ) //dont know how it works
			{
				printf("Name: %s\n",patient[i].Name);
				printf("Age: %d\n",patient[i].Age);
				printf("Gender: %c\n",patient[i].Gender);
				printf("Reserved At Slot:   %d\n",Index);
			}
		}

 }
for (u8 i=0;i<11;i++)  // checking the array elements 
{
	printf("slot[%d]= %d\n",i+1,slot[i]);
}
 }
 

 
void clearing (New_Patient patient[])
{   
    //u16 slot[11]={0};
	printf("Enter the ID to cancel the reservation :");
	scanf("%d",&slot[10]);
	for (u8 i=0;i<10;i++)
	{  
		if (slot[i]==slot[10]){
		slot[i-5]=0;
		
		printf("The Reservation in slot %d is canceld\n",i+1);
		slot[i]=0;
		
	}
	}
		for (u8 i=0;i<10;i++){
	printf("slot[%d]= %d\n",i+1,slot[i]);
	}
	
}
void view_Patient_Record (New_Patient patient[])
{
	u16 ID;
	printf("Enter patient ID to view the patient record");
	scanf("%d",&ID);
	for (u8 i=0; i<5; i++)
	{
		if (patient[i].ID==ID)
		{
			printf("The patient ID :%s",patient[i].ID);
			printf("The patient Name :%s",patient[i].Name);
			printf("The patient Age :%d",patient[i].Age);
			printf("The patient Name :%c",patient[i].Gender);
			
			
		}
	}
}
void Show_Reservations(void)
{  
	for (u8 i=0; i<10;i++)
	{
		if (slot[i]==1)
		{
			printf("The slot number %d is reserved for patient ID %d",i+1,i+5);
		}
	}	
	
	for (u8 i=0; i<5;i++)
		 if (slot[i]==0)
		{
			printf("The slot number %d is Available \n",i+1);
		}
}