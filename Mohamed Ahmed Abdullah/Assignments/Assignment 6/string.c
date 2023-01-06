#include <stdio.h>
#include <stdlib.h>

int is_distinct(char word[], int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (word[i] == word[j])
            {
                return 0;
            }   
        }
    }
    return 1;
}

void upper(char word[], int size){
    for (int i = 0; i < size; i++)
    {
        if (97 <= word[i] && word[i] <= 122)
        {
            word[i] -= (97-65);
        }
    }
}

int freq_of_letter(char word[], int size, char letter){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (word[i] == letter)
        {
            count++;
        }   
    }   
    return count;
}

int length(char* word){
    int count = 0;
    while (word[count])
    {
        count++;
    }
    return count;
}

void alphabets_only(char* word, int size){
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        if (!((65 <= word[i] && word[i] <= 90)||(97 <= word[i] && word[i] <= 122)))
        {
            for (int j = i; j < size-1; j++)
            {
                if (((65 <= word[j] && word[j] <= 90)||(97 <= word[j] && word[j] <= 122)))
                {
                    int temp = word[j]; 
                    word[j] = word[j+1];
                    word[j+1] = temp;
                }       
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (!((65 <= word[i] && word[i] <= 90)||(97 <= word[i] && word[i] <= 122)))
        {
            word[i] = ' ';
        }
    }
}