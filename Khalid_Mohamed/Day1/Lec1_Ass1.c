#include <stdio.h>
int num1 ;
int num2 ;
int result ;
int main (){
	printf ("Please enter two integer number \n");
	scanf   ( "%i",&num1);
	scanf   ( "%i",&num2);
	result = ((num1*num2)*3)-10 ; 
	printf ("The result is =  %i",result);
	
	
	
}