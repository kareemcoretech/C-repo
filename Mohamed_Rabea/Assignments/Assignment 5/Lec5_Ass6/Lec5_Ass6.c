/*Author : "Mohamed Mohamed Rabea ".

Version : "1.0".

program:   The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called
           Fibonacci numbers, each is the sum of the preceding 2. 
           Write a program which given n, returns the nth Fibonacci 
           number.
        
*/


#include<stdio.h>

#include"Term.h"
int main ()
{    int term_number;
	printf("Enter the term number of the arithmatec series : ");
	scanf("%d", &term_number);
	
	int Arr[term_number];
	
	Term( Arr , term_number );
	

}


