/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 06 01 2023

    Description of task: 
        Write a function which, given a string, converts all upper 
        case letters to lowercase, leaving the others unchanged
*/

#include <stdio.h>
#include "string.h"

void main(void){
    char word[5];
    int size = sizeof(word)/sizeof(word[0]);

    printf("Enter word: ");
    scanf("%s", word);

    upper(word, size);
    printf("%s", word);

    return;
}