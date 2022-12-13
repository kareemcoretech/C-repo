#include <stdio.h>

int main(){
	int number1;
    int number2;
    int number3;

    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);
    printf("Enter number 3: ");
    scanf("%d", &number3);

    int max;
    if (number1 >= number2 && number1 >= number3)
    {
        max = number1;
    }else if (number2 >= number1 && number2 >= number3)
    {
        max = number2;
    }else if (number3 >= number2 && number3 >= number1)
    {
        max = number3;
    }

    printf("Maximum number is %d", max);
    
	
	return 0;
}