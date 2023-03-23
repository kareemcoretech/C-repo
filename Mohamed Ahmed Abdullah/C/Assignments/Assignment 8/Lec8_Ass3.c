/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 17 01 2023

    Description of task: 
        C Function to read 10 integers into an array from user and 
        print them in reversing order using pointers. 
*/

#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *arr, int size);
void main(void){
    int size = 10;
    int *arr = calloc(size, sizeof(int));

    printf("Enter 10 integers: ");
    for(int i = 0; i < size; i++){
        scanf("%d", arr + i);
    }
    reverse_array(arr, size);
}

void reverse_array(int *arr, int size){
    for(int i = size - 1; i >= 0; i--){
        printf("%d ", *(arr + i));
    }
}