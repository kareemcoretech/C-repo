/*
Author: Shady Maher
Version 1
Description of the task: Assignment 5
Date: 15/12/2022
*/

#include <stdio.h>
int Q1 ( int Array [] , int size );		//total sum of array
int Q2 ( int Array [] , int size );		//first occurrence
int Q3 ( int Array [] , int size );		//last occurrence
void Q4 ( void );		//arithmatic series
void Q5 ( void );		//greometric series
int Q6 ( void );		//Fibonacci numbers					
void Q7 ( int Array1[] , int Array2[] , int size ); //swap two arrays
void Q8 ( void );		//Reverse


int main ()
{
	int Array1 [] = {1,2,3,4,4,4};
	int Array2 [] = {0,0,0,0,0,0};
	int size = sizeof(Array1)/ sizeof(Array1[0]);
	
	//int sum = Q1( Array1 , size );
	//printf("%d\n",sum);
	
	//int first_occurrence = Q2( Array1 , size );
	//printf("The Number is Availble in index %d", first_occurrence );
	
	//int last_occurrence = Q3( Array1 , size );
	//printf("The Number is Availble in index %d", last_occurrence );
	
	Q5();
	
	//int Fibonacci_Number = Q6();
	//printf("The Fibonacci Number is %d", Fibonacci_Number );
	
	//Q7( Array1 , Array2 , size );
	
	//Q8();
	
}

int Q1 ( int Array [] , int size )			//total sum of array
{
	int sum;
	for ( int i = 0 ; i < size ; i++ )
	{
		sum += Array[i];
	}
	return sum;
}


int Q2 ( int Array [] , int size )			//first occurrence
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for ( int i = 0 ; i < size ; i++ )
	{
		if ( num == Array[i] )
		{
			return i;
			break;
		}
		else
			return -1;
	}
}


int Q3 ( int Array [] , int size )			//last occurrence
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for ( int i = size-1 ; i >= 0 ; i++ )
	{
		if ( num == Array[i] )
		{
			return i;
			break;
		}
		else
			return -1;
	}
}


void Q4 ( void )					//arithmatic series
{
	int seq [100] = {0};
	int size = sizeof(seq)/sizeof(seq[0]);
	int num = 1 , term = 0;
	
	/*for ( ;; )
	{
		if ( num % 2 == 1 )
		{
			seq[term] = num;
			term++;
			num += 2;
		}
		if ( term > 99 )
			break;
	}*/
	
	while ( term < 100 )
	{
		if ( num % 2 == 1 )
		{
			seq[term] = num;
			term++;
			num += 2;
		}
	}
	
	for ( int i = 0 ; i < size ; i++ )
	{
		printf( "%d\n" , seq[i] );
	}
}


void Q5 ( void )				//greometric series
{
	int seq [10] = {1};
	int size = sizeof(seq)/sizeof(seq[0]);
	int num;
	
	for ( int i = 0 ; i < size-1 ; i++ )
	{
		num = seq[i] * 3;
		seq [i+1] = num;
	}
	
	for ( int i = 0 ; i < size ; i++ )
	{
		printf( "%d\n" , seq[i] );
	}		
}


int Q6 ( void )					//Fibonacci numbers
{
	int n, num;
	printf("Enter The Term: ");
	scanf("%d", &n);
	
	int Fibonacci [25] = {1,1};
	
	for ( int i = 0 ; i < n-2 ; i++ )
	{
		num = Fibonacci[i]+Fibonacci[i+1];
		Fibonacci[i+2] = num;	
	}
	return Fibonacci[n-1];
}


void Q7 ( int Array1[] , int Array2[] , int size )    //swap two arrays
{
	for( int i = 0 ; i < size ; i++ )
	{
		int temp = Array1[i];
		Array1[i] = Array2[i];
		Array2[i] = temp;
		printf("%d ", Array1[i] );
	}
}


void Q8 ( void )				//Reverse
{
	int Array[5] = {0};
	
	for ( int i = 0 ; i < 5 ; i++ )
	{
		scanf("%d",&Array[i]);
	}
	for ( int i = 4 ; i >= 0 ; i-- )
	{
		printf("%d\n", Array[i] );
	}
}