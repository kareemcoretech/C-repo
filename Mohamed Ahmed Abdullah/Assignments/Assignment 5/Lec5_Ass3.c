/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 14 12 2022 

    Description of task: 
        Write a C function to return the index of LAST occurrence of 
        a number in a given array. Array index start from 0. If the item 
        is not in the list return -1 
        Example: 
        Array = {1,2,3,4,4,4} 
        The required number is 4 it should return 5 
*/

#include <stdio.h>
#include "ArrayOperations.h"

int main(){
    int arr[5];
    int size = sizeof(arr)/ sizeof(arr[0]);
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int number;
    scanf("%d", &number);

    int result = lastOccurrenceSearch(arr, 5, number);
    printf("%d", result);
    
	return 0;
}