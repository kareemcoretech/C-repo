/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 17 01 2023

    Description of task: 
        C function to get the value of the smallest element in array 
        using pointers. 
*/

#include <stdio.h>
#include <stdlib.h>

int smallest_value_in_arr(int *arr1, int size);

void main(void){
    int arr1[5];
    int size = sizeof(arr1)/sizeof(arr1[0]);
    for (int i = 0; i < size; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    printf("Smallest value in array is: %d", smallest_value_in_arr(arr1, size));
}

int smallest_value_in_arr(int *arr1, int size){
    int smallest = *arr1;
    for(int i = 0; i < size; i++){
        if(*(arr1 + i) < smallest){
            smallest = *(arr1 + i);
        }
    }
    return smallest;
}
