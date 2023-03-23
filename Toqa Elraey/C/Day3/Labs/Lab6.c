#include <stdio.h>

int main(){
	int x;
	int fac = 1;
	printf("Enter a Number: ");
	scanf("%d", &x);
	
	for(int i = x; i > 0; i--){
		fac = fac * i;
	}
	printf("The Factorial of number %d is: %d", x, fac);
}