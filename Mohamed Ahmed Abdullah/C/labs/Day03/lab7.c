#include <stdio.h>

void main(void){
    int number1;
    int number2;
 
    while (1)
    {
        printf("Please enter first number ");
        scanf("%d", &number1);

        printf("Please enter second number ");
        scanf("%d", &number2);

        int sum = number1 + number2;
        printf("The result is %d \n", sum);

        printf("\n");
    }
    
    return;
}