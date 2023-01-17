/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 17 01 2023

    Description of task: 
        you have the words: property, probability, program, 
        process, progress, problem, propagation, performance, perfect, 
        perfume, 
        Make an autocomplete program, where you ask the user to 
        enter the first letter of his word, then the program tries to 
        predict the word, if it is wrong ask to enter the next character, 
        then again try to predict, until it is right then the program 
        displays the percentage of the input letters out of the whole 
        word. 
*/

#include <stdio.h>
#include <stdlib.h>

// function to get the length of the word
int length(char* word);

// the database of the words
char search_DB[10][12] = {"property", "probability", "program", "process", "progress", "problem", "propagation", "performance", "perfect", "perfume"};
    
void main(void){
    int wrong_prediction = 1; // 1 = wrong prediction, 0 = right prediction
    
    char letter; // the letter that the user enters

    int checking_letter_index = 0; // the index of the letter that the program is checking
    char check_word = 'n'; // the user answer if the word is correct or not

    int checking_word_index = 0; // the index of the letter that the user is checking
    
    int possibles = 0;

    printf("Enter the first letter of the word: ");
    do
    {   
        // get the letter from the user
        scanf(" %c", &letter);

        // check if the letter is in the database        
        while (checking_word_index < 10)
        {
            if (search_DB[checking_word_index][checking_letter_index] == letter)
            {
                possibles++;
                printf("The word is: %s\n", search_DB[checking_word_index]);
                printf("Is this the word you are looking for? (y/n): ");
                scanf(" %c", &check_word);
                if (check_word == 'y')
                {
                    wrong_prediction = 0;
                    break;
                }else if (check_word == 'n')
                {
                    checking_letter_index++;
                    printf("Enter the next letter: ");
                    break;
                }else{
                    printf("Wrong input, Bye! ");
                    exit(0);
                }
            }else{
                for (int j = 0; j < 12; j++)
                {
                    search_DB[checking_word_index][j] = ' ';
                }
            }
            if (possibles == 0)
            {
                printf("No word with this letter, Bye! ");
                exit(0);
            }
            
            checking_word_index++;
        }
    } while (wrong_prediction);    

    printf("\nThe word is: %s\n", search_DB[checking_word_index]);

    float percent = (float)(checking_letter_index+1)/(float)length(search_DB[checking_word_index]);
    printf("The percentage of the input letters out of the whole word is: %f%%", (percent) * 100);
}

int length(char* word){
    int count = 0;
    while (word[count])
    {
        count++;
    }
    return count;
}
