/*Auth: MOHAMED MOHAMED RABEA.
ver:(1.0)
program: (3) C Function to read 10 integers into an array from user and 
             print them in reversing order using pointers.*/

#include<stdio.h>

int main ()
{
	int Arr[10];
	int size =10;
	int *ptr;
	
	printf("Enter 10 elments of Array:");
	
	for(int i=0; i<10; i++)
	{
	scanf("%d",&Arr[i]);
	}
	


	ptr= &Arr[0] ;
	
	for (int i=size-1; i>-1;i--){
		 printf("Arr[%d] : %d\n",i,ptr[i]);
	}

	
	}