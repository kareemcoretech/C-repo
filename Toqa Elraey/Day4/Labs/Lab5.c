#include <stdio.h>
#include "Lab5_funcMax.h"
#include "Lab5_funcMin.h"

int main(){
	int num1, num2, num3, num4, max, min;
	
	printf("Please enter the first number: ");
	scanf("%d", &num1);
	printf("Please enter the second number: ");
	scanf("%d", &num2);
	printf("Please enter the third number: ");
	scanf("%d", &num3);
	printf("Please enter the fourth number: ");
	scanf("%d", &num4);
	
	max = GetMax(num1, num2, num3, num4);
	min = GetMin(num1, num2, num3, num4);
	printf("The maximum number of them is: %d\n", max);
	printf("The minmum number of them is: %d\n", min);

}