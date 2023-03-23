/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 31 12 2022 

- Description of task: Assignment 1
	Write a C code that defines a function which takes an array as input argument 
    and apply the bubble sorting algorithm on it, then print the result
*/

#include <stdio.h>

void bubble_sort(int* array, int size);
void print_array(int* array, int size);
void swap(int *x, int *y);

int main(){
    int array[10];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {	
		printf("Please enter number %d: ", i);
        scanf("%d", &array[i]);
    }

    print_array(array, size);
    bubble_sort(array, size);
    print_array(array, size);
}

void bubble_sort(int* array, int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                swap(&array[j],&array[j+1]);
            }
        }
        
    }
    
}

void print_array(int* array, int size){
    for (int i = 0; i < size; i++)
    {	
		printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}