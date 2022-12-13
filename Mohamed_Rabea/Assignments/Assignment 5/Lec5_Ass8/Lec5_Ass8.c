/*Author : "Mohamed Mohamed Rabea ".

Version : "1.0".

program:   Write a C function that takes an array as input and reverse
           it without creating another array.
           Example:
           Input : 1,2,3,4,5
           Output: 5,4,3,2,1*/

#include<stdio.h>

#include"Reverse.h>

int main()
{
	int Arr[5];
	printf("Enter the 5 elements :");
	for(int i ; i<5; i++){
		scanf("%d",&Arr[i]);
	}
    int size=sizeof Arr/sizeof Arr[0];
   reverse(Arr, size );
}
