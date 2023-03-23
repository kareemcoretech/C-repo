#include <stdio.h>

void main(void){
    printf("Enter the 10 numbers: \n");
    int number;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Number-%d   : ", i);
        scanf("%d", &number);
        sum += number;
    }
    
    float avg = (float)sum / 10;
    printf("The sum of 10 no is : %d \n", sum);
    printf("The Average is      : %f \n", avg);
}