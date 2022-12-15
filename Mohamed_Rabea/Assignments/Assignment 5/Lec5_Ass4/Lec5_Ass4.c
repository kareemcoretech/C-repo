/* Author : "Mohamed Mohamed Rabea ".

Version : "1.0".

program:   Write a program that computes the n th term of the 
           arithmetic series: 1, 3, 5, 7, 9, …
           Run the program to compute the 100th term of the given series */

#include<stdio.h>

#include"Term.h"

int main ()
{    int term_number;
	printf("Enter the term number of the arithmatec series : ");
	scanf("%d", &term_number);
	
	int Arr[term_number];
	
	Term( Arr , term_number );
	

}

