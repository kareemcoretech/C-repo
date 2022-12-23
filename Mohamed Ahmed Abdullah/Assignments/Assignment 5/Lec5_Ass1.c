/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 14 12 2022 

    Description of task: 
        Write a function called total, which totals the sum of an 
        integer array passed to it (as the first parameter) and returns 
        the total of all the elements as an integer. Let the second 
        parameter to the function be an integer which contains the 
        number of elements of the array. 
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
    
    int result = total(arr, 5);
    printf("%d", result);
    
	return 0;
}