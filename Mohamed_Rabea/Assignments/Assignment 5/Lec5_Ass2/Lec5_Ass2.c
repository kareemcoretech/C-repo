/*Author : "Mohamed Mohamed Rabea ".

Version : "1.0".

program:Write a C function to return the index of FIRST occurrence of 
        a number in a given array. Array index start from 0. If the item 
        is not in the list return -1.
        Example :
        Array = {1,2,3,4,4,4}
        The required number is 4 it should return 3*/

#include <stdio.h>


#include "index.h"


int main()
{   int result,num;
	int Arr[6]={1,2,3,4,4,4};
	int size = sizeof Arr  /sizeof Arr[0];
	printf("Enter a number:");
    scanf("%d",&num);
	result = Index( Arr, size,num);
	printf("Index is : %d",result);
	
	
}

