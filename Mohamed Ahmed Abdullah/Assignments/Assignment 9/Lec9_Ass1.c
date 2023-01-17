/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 17 01 2023

    Description of task: 
        C Program to print all the array elements and the maximum 
        number in array using array of pointers.
*/

#include <stdio.h>
#include <stdlib.h>

int max_arr(int *arr[], int size);

void main(void){
    // Getting the array elements from the user
    int arr[5];
    for(int i = 0; i < 5; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Assigning the address of each element in the array to the array of pointers
    int *arr_ptr[5];
    for(int i = 0; i < 5; i++){
        arr_ptr[i] = &arr[i];
    }
    
    // Printing the array elements
    for(int i = 0; i < 5; i++){
        printf("%d ", *arr_ptr[i]);
    }
    printf("\n");

    // Printing the maximum number in the array
    printf("Max: %d", max_arr(arr_ptr, 5));
}

int max_arr(int *arr[], int size){
    int *max = arr[0];
    for(int i = 0; i < size; i++){
        if(*arr[i] > *max){
            max = arr[i];
        }
    }
    return *max;
}