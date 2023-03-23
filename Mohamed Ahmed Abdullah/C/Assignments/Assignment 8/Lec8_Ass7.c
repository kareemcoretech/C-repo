/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 17 01 2023

    Description of task: 
        Given a string, create a new string made up of its last two 
        letters, reversed and separated by a space, the word is “bat”. 
        Return string contains ”t a”. 
*/

#include <stdio.h>
#include <stdlib.h>

int length(char* word);

void main(void){

    char *str = calloc(100, sizeof(char));
    printf("Enter string: ");
    scanf("%s", str);
    char *new_str = calloc(3, sizeof(char));

    int size = length(str);
    // Get last two letters
    for(int i = 0; i < size-1; i++){
        *(new_str + i) = *(str + (size-1 - i));
    }

    // Print new string
    printf("%c %c", new_str[0], new_str[1]);
}

int length(char* word){
    int count = 0;
    while (word[count])
    {
        count++;
    }
    return count;
}