/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 06 01 2023

    Description of task: 
        Write a function which, given a string, return TRUE if all 
        characters are distinct and FALSE if any character is repeated.
*/

#include <stdio.h>
#include "string.h"

void main(void){
    char word[5];
    int size = sizeof(word)/sizeof(word[0]);

    printf("Enter word: ");
    scanf("%s", word);

    if (is_distinct(word, size))
    {
        printf("Word is distinct.");
    }else
    {
        printf("Word isn't distinct.");
    }

    return;
}