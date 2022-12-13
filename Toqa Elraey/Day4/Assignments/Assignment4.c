#include <stdio.h>
#include "Assignment4_func.h"

int main(){
	int num;
	printf("please enter a number: ");
	scanf("%d", &num);
	
	int z = countHoles(num);
	printf("%d", z);
}