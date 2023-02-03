#include<stdio.h>
void swap(int *x, int *y);
 
void main()
{
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("The numbers before swapping are Number1= %d Number2 = %d", num1, num2);
    swap(&num1, &num2);   
    printf("\nThe numbers after swapping are Number1= %d Number2 = %d", num1, num2);
}
 
/* Code to swap two numbers using bitwise operator */
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}