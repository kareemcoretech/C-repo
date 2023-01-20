/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 07 01 2023

    Description of task: 
        Write a function to concatenate two strings.
*/

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void main(void){
    char word1[100];
    char word2[100];
    char result_word[100];

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);


    concatenate(word1, word2, result_word);
    printf("%s", result_word);

    return;
}