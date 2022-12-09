#include <stdio.h>
#include "Assignment1_func.h"

int main(){
	int num, out;
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	out = cube(num);
	printf("The cube of %d is: %d", num, out);
}