/* Write a program that computes the n th term of the 
arithmetic series: 1, 3, 5, 7, 9, …
Run the program to compute the 100th term of the given series */
#include<stdio.h>

void Term (int Array[], int number);
int main ()
{    int term_number;
	printf("Enter the term number of the arithmatec series : ");
	scanf("%d", &term_number);
	
	int Arr[term_number];
	
	Term( Arr , term_number );
	

}

void Term ( int Array[],int number )
{
    int result;
	
	for (int i=0 ; i < number ; i++ )
	{   
        Array[i] = 2*i+1;
		result = Array[i];
		
	    }
	printf("the %d th term is :%d",number,result);
    
 	
}


