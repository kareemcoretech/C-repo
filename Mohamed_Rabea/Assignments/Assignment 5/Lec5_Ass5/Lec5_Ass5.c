/*Author : "Mohamed Mohamed Rabea ".

Version : "1.0".

program:   Write a program that computes the nth term of the 
           geometric series: 1, 3, 9, 27, …
           Run the program to compute the 10th term of the given series*/

#include<stdio.h>
#include "Term.h"
int main ()
{    int term_number;
	printf("Enter the term number of the arithmatec series : ");
	scanf("%d", &term_number);
	
	int Arr[term_number];
	
	Term( Arr , term_number );
	

}



