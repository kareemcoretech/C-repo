/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 06 01 2023

    Description of task: 
        Write a function that prints the frequency of a certain 
        character in a string. 
*/

#include <stdio.h>
#include "string.h"

void main(void){
    char word[5];
    int size = sizeof(word)/sizeof(word[0]);

    printf("Enter word: ");
    scanf("%s", word);

    char letter;
    printf("Enter letter: ");
    scanf(" %c", &letter);

    int count = freq_of_letter(word, size, letter);
    printf("Occurrence = %d", count);
    return;
}