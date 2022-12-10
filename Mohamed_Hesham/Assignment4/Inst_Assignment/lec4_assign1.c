#include <stdio.h>
#include <math.h>

int getcube(double number){
	int cube = pow(number, 3);
	return cube;
}

int main(){
	double input;
	printf("Please Enter the value: ");
	scanf("%lf", &input);
	int cuberesult = getcube(input);
	printf("Cube Result of the Number is: %d", cuberesult);
}