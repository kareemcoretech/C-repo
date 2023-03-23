/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 17 01 2023

    Description of task: 
        C Function to find length of a given string using pointer.
*/

#include <stdio.h>
#include <stdlib.h>

int length(char* word);

void main(void){
    char *arr = calloc(100, sizeof(int));
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Enter string: ");
    scanf("%s", arr);

    printf("Length of the array is: %d", length(arr));
}

int length(char* word){
    int len = 0;
    while(*word != '\0'){
        len++;
        word++;
    }
    return len;
}