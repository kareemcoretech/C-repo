
#include <stdio.h>

int sum(int *a, int *b);

void main(void){
    int x1, x2;

    printf("Please Enter value 1: ");
    scanf("%d", &x1);
    printf("Please Enter value 2: ");
    scanf("%d", &x2);

    int result = sum(&x1, &x2);
    printf("The result is: %d", result);
}

int sum(int *a, int *b){
    int result = *a + *b;
    return result;
}