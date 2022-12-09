#include <stdio.h>

void main(void)
{
    int rows;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++)
    { 

        for(int j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}