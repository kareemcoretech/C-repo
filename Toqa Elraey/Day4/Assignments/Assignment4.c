#include <stdio.h>
#include "Assignment4_func.h"

int main(){
	float num;
	printf("please enter a number: ");
	scanf("%f", &num);
	
	int z = countHoles(num);
	printf("%d", z);
}