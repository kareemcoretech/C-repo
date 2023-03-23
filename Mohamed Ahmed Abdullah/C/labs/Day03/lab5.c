#include <stdio.h>

void main(void){
    int number;
    printf("Enter the number to display its multiplication table: ");
    scanf("%d", &number);

    printf("\n");
    for (int i = 1; i <= number; i++)
    {
        printf("%d * %d = %d \n", number, i, number*i);
    }
    
    return;
}