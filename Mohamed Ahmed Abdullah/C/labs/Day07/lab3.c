
#include <stdio.h>

void calc(int a, int b, int *sum, int *subtract);

void main(void){
    int x1, x2;
    int sum, subtract; 
    printf("Please Enter value 1: ");
    scanf("%d", &x1);
    printf("Please Enter value 2: ");
    scanf("%d", &x2);

    calc(x1, x2, &sum, &subtract);
    
    printf("The result of summation is: %d \n", sum);
    printf("The result of subtraction is: %d \n", subtract);
}

void calc(int a, int b, int *sum, int *subtract){
    *sum = a + b;
    *subtract = a - b;
}