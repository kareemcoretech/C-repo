#include <stdio.h>

int main(){
	float r, A, C;
	
	printf("Please enter the radius: ");
	scanf("%f", &r);
	
	A = r * r * 22 / 7;
	C = 2 * r * 22 / 7;
	
	printf("The Area of Circle is: %f\n", A);
	printf("The Circumference of Circle is: %f", C);
	
}