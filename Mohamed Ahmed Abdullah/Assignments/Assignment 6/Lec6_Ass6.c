/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 06 01 2023

    Description of task: 
        Write a function to find the length of a string.
*/

#include <stdio.h>
#include "string.h"

void main(void){
    char word[5];
    printf("Enter word: ");
    scanf("%s", word);

    int count = length(word);
    printf("Length = %d", count);
    return;
}