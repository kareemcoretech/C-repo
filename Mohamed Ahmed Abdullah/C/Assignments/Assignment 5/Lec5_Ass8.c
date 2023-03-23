/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 14 12 2022 

    Description of task: 
        Write a C function that takes an array as input and reverse 
        it without creating another array. 
        Example: 
        Input : 1,2,3,4,5 
        Output: 5,4,3,2,1 
*/

#include <stdio.h>
#include "ArrayOperations.h"

void main(void){
    int arr[5];
    int size = sizeof(arr)/ sizeof(arr[0]);
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int* resultArray = reverseArray(arr, size);
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", resultArray[i]);
    }
}