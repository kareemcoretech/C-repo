#include<stdio.h>
int main()
{
    char lowerChar, upperChar;
    printf("Enter a lowercase Character:" );
    scanf("%c", &lowerChar);
    upperChar = lowerChar-32;
    printf(" Uppercase = %c", upperChar);
  
}