#include <stdio.h>

int main(){
	int number1;
    int number2;

    printf("Enter the number 1: ");
    scanf("%d",&number1);

    printf("Enter the number 2: ");
    scanf("%d",&number2);
    
    int division = number1 / number2;

    if (division * number2 == number1)
    {
        printf("The first number is multiple of second number");
    }else{
        printf("The first number is not multiple of second number");
    }
    
	return 0;
}