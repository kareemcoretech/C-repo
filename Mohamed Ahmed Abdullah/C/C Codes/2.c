/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 25 01 2023

    Description of task: 
        2. C Code to Count Number of ones in the binary of an integer NB.
*/

#include <stdio.h>
#include <stdlib.h>

#include "c_library.h" // This is the library I created

void main(void){
    int number = 0;
    scanf("%d", &number);

    int c = count_ones(number);
    printf("Numbers of ones in the binary of %d is %d", number, c);
}
