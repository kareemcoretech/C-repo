#include <stdio.h>

void main(void){
    int answer = 0;
    printf("Enter the answer of 3 * 4 = ");
    scanf("%d", &answer);
    while (answer != 12)
    {
        printf("Not correct. Please try again: ");
        scanf("%d", &answer);
    }
    printf("Thank You");
    return;
}