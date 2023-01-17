/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 17 01 2023

    Description of task: 
        C Function to compute sum of the array elements using 
        pointers.
*/

#include <stdio.h>
#include <stdlib.h>

int sum_array(int *ptr, int size);

void main(void){
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    sum = sum_array(arr, 5);
    printf("Sum of the array elements is %d", sum);
}

int sum_array(int *ptr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *ptr;
        ptr++;
    }
    return sum;
}