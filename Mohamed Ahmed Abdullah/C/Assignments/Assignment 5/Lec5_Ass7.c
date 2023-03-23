/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 14 12 2022 

    Description of task: 
        Write a C function to swap the contents of two arrays with 
        the same length. 
*/

#include <stdio.h>

int ARRAY1[] = {10,20,30,40,50};
int ARRAY2[] = {900,800,700,600,500};

void swapArray(int size);
void main(void){
    int size1 = sizeof(ARRAY1) / sizeof(ARRAY1[0]);
    int size2 = sizeof(ARRAY2) / sizeof(ARRAY2[0]);

    for (int i = 0; i < size1; i++)
    {
        printf("%d ", ARRAY1[i]);
    }
    printf("\n");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", ARRAY2[i]);
    }
    
    printf("\n");
    swapArray(size1);
    printf("\n");

    for (int i = 0; i < size1; i++)
    {
        printf("%d ", ARRAY1[i]);
    }
    printf("\n");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", ARRAY2[i]);
    }
}

void swapArray(int size){
    int temp;
    for (int i = 0; i < size; i++)
    {
        temp = ARRAY1[i];
        ARRAY1[i] = ARRAY2[i];
        ARRAY2[i] = temp;
    }   
}