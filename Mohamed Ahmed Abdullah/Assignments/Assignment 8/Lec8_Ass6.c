/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 17 01 2023

    Description of task: 
        Write a C function to swap the contents of two arrays with 
        the same length using pointers.
*/

#include <stdio.h>
#include <stdlib.h>

// Initialize functions
void swap_arrays(int *arr1, int *arr2, int size);

void main(void){
    int arr1[5];
    int arr2[5];
    int size = sizeof(arr1)/sizeof(arr1[0]);

    // Get values for arrays
    for (int i = 0; i < size; i++)
    {
        printf("Enter value %d for array 1: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter value %d for array 2: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    // Swap arrays
    swap_arrays(arr1, arr2, size);
    
    // Print arrays
    printf("Array 1: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    
    printf("\nArray 2: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }
}

// Swap arrays
void swap_arrays(int *arr1, int *arr2, int size){
    int temp;
    for(int i = 0; i < size; i++){
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}