
#include <stdio.h>

void main(void){
    int x = 10;
    int* ptr = &x;

    printf("X before change is: %d \n", *ptr);
    *ptr = 20;
    printf("X after change is: %d \n", *ptr);

    printf("ptr pointer to address: %p \n", ptr);
    printf("x address: %p \n", &x);

}