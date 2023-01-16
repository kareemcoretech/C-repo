/*Auth : MOHAMED MOHAMED RABEA 
VER : (V.0.1)
program :(2) C function to add two complex numbers by passing two  structure to a function and display the results.
*/
#include <stdio.h>
#include "types.h"
typedef struct 
{
	f32 real;
	f32 imagine ;
} complex;

complex SUM (complex NUM_1, complex NUM_2 );

int main()
{
    complex NUM1,NUM2,Result ;
	
    printf("Enter the real of first number:");
	scanf ("%f",&NUM1.real);
	
	printf("Enter the imagine of first number:");
	scanf ("%f",&NUM1.imagine);
	
	printf("Enter the real of first number:");
	scanf ("%f",&NUM2.real);
	
	printf("Enter the imagine of first number:");
	scanf ("%f",&NUM2.imagine);
	
   Result= SUM(NUM1,NUM2);
	
   printf("SUM = %.1f + %.1f i", Result.real, Result.imagine);
	
}
complex SUM (complex NUM_1,complex NUM_2 )
{   complex ADD ;

	ADD.real = NUM_1.real + NUM_2.real;
	ADD.imagine = NUM_1.imagine + NUM_2.imagine;
	return ADD;
}