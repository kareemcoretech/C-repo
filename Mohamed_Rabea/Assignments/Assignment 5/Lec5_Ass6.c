/*The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called
Fibonacci numbers, each is the sum of the preceding 2. 
Write a program which given n, returns the nth Fibonacci 
number.
- with for/while
*/


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
    int i=0,temp1, temp2,result;
	Array[i]=1;
	Array[i+1]=1;
	Array[i+2]=3;
     
	for ( (i)=0 ; i < number ; i++ )
	{
    temp2=Array[i];
	temp1=Array[i+1];
	Array[i+2]=temp1+temp2;
	
	result=Array[i];
	printf("the %d th term is :%d\n",i,result);
	}
	
    
 	
}


