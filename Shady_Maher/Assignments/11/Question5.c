#include <stdio.h>
#include "datatypes.h"

union family_name
{
   u8 first_name[30];
   u8 last_name[30];
};

int main( )
{
	
	union family_name Family;        
	strcpy( Family.first_name, "Monjed");
    strcpy( Family.last_name,  "Salih");
  
   
   /*printf("first: ");
   scanf("\n");
   scanf("%[^\n]s",&Family.first_name);
   
   printf("last: ");
   scanf("\n");
   scanf("%[^\n]s",&Family.last_name);*/

   printf( "First name : %s\n", Family.first_name);
   printf( "Last name : %s\n", Family.last_name);
   printf("Size of union = %d bytes", sizeof(Family));


   
}