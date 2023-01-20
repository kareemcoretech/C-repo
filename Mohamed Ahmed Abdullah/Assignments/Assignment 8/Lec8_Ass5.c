/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 17 01 2023

    Description of task: 
        C function to copy all elements of an array into another 
        array using pointers. The two arrays have the same length and 
        types.
*/

#include <stdio.h>
#include <stdlib.h>

void copy_array(int *arr1, int *arr2, int size);

void main(void){
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    copy_array(arr1, arr2, 5);
    for(int i = 0; i < 5; i++){
        printf("%d ", arr2[i]);
    }
}

void copy_array(int *arr1, int *arr2, int size){
    for(int i = 0; i < size; i++){
        *arr2 = *arr1;
        arr1++;
        arr2++;
    }
}
