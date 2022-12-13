/*Write a program that computes the nth term of the 
geometric series: 1, 3, 9, 27, …
Run the program to compute the 10th term of the given series*/

#include<stdio.h>
#include<math.h>
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
    int i,result;
 
	for ( i=0 ; i < number ; i++ ){
	Array[i]=pow(3,i);
	result=Array[i];
	}
	printf("the %d th term is :%d",number,result);
    
 	
}


