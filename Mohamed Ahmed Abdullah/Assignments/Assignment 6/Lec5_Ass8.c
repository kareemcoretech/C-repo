/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 07 01 2023

    Description of task: 
        Write a function to reverse a string passed to it.
*/

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void main(void){
    char word[5];
    int size = sizeof(word) / sizeof(word[0]);

    printf("Enter word: ");
    scanf("%s", word);

    reverse(word);
    printf("%s", word);
    return;
}