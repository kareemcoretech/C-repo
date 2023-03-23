#include <stdio.h>

void main(void){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int factorial = 1;

    while (number != 1)
    {
        factorial *= number;
        number--;
    }
    
    printf("Factorial = %d", factorial);
    return;
}