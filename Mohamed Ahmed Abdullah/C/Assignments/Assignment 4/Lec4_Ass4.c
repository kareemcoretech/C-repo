/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Date: 13 12 2022 

    Description of task: 
        You are designing a poster which prints out numbers with a 
        unique style applied to each of them. The styling is based on 
        the number of closed paths or holes present in a giver number. 
        The number of holes that each of the digits from 0 to 9 have 
        are equal to the number of closed paths in the digit. Their 
        values are: 
        - 1, 2, 3, 5 and 7 = 0 holes. 
        - 0, 4, 6, and 9 = 1 hole. 
        - 8 = 2 holes. 
        Given a number, you must determine the sum of the number of 
        holes for all of its digits. For example, the number 819 has 3 
        holes. 
        Make the function countHoles. The function must return an 
        integer denoting the total number of holes in num
*/

#include <stdio.h>
#include "AssignmentsLibrary.h"

int main(){
    int n; 
    int b;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int holesCount = countHoles(n);
    printf("%d", holesCount);

	return 0;
}