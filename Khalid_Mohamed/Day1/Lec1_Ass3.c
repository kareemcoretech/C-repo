#include <stdio.h>
float C ;
float F ; 
int main (){
	printf ("Please enter the degree in Celsius \n");
	scanf (" %f",&C);
     F = ((C * 9/5) + 32) ;
	printf ("The degree in Fahrenheit is :  %f",F);
	
}