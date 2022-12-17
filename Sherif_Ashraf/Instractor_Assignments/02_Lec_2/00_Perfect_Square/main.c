#include<stdio.h>

int main(void)
{
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 0; i <= num; i++)
    {
        if(num == i*i)
        {
            printf("%d is a perfect square\n", num);
            return 0;
        }

    }
    printf("%d is not a perfect square\n", num);
    return 0;
}