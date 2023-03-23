/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 25 01 2023

    Description of task: 
        1. C Code to draw a certain shape
*/

#include <stdio.h>
#include <stdlib.h>

#include "c_library.c" // This is the library I created

void main(void){
    // Getting the number of rows from the user
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Drawing the shape
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            if(i == 0 || i == rows-1 || j == 0 || j == rows-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
