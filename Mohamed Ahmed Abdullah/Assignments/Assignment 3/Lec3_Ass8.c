/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 13 12 2022 

- Description of task: 
  Write a program to display cross or X-shape using stars 
  pattern
*/

#include <stdio.h>


void main(void){
    int size = 12;
    int i=0, j=0;
    while(i<size)
    {
        j=0;
        while(j<size)
        {
            if(j == i || i == (size-1)-j){
                printf("*");
            }
            else{
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return;
}