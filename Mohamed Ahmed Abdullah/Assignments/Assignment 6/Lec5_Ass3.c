/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 06 01 2023

    Description of task: 
        Write a C function that use the bubble sorting algorithm to 
        sort an integer array in descending order.
*/

#include <stdio.h>
#include "sorting.h"

void main(void){
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    selection_sort(arr,size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return;
}

