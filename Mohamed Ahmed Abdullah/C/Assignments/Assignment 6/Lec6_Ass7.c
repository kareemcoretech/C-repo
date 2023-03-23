/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 06 01 2023

    Description of task: 
        Write a function to remove all characters in a string 
        expect alphabets.
*/

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void main(void){
    char word[5];
    int size = sizeof(word) / sizeof(word[0]);

    printf("Enter word: ");
    scanf("%s", word);

    alphabets_only(word, size);
    printf("%s", word);
    return;
}