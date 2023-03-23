/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 15 12 2022 

- Description of task: Assignment 1
	Write a C code that ask the user to enter 10 values and save them in an array
    using a for loop. Then print the minimum and the maximum of the values.
*/

#include <stdio.h>

void min_max(int array[], int size);

int main(){
    int array[10];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {	
		printf("Please enter number %d: ", i);
        scanf("%d", &array[i]);
    }

    min_max(array, size); 
}

void min_max(int array[], int size){
    int min = 100000; int max = -1000000;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }            

        if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf("min = %d \nmax = %d", min , max);
}