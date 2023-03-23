/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 13 12 2022 

- Description of task: 
    Write a program to display a full pyramid using stars 
    pattern.
*/

#include <stdio.h>

void main(void){
    int number;
    printf("Please Enter the height of the pyramid: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        for (int j = number - 1 - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return;
}