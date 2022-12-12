#include <stdio.h>

int main(){
		
	int radius;
	
	printf("Enter the radius: ");
	scanf("%d",&radius);
	
	float area = 3.14 * radius * radius;
	float circumference = 2 * 3.14 * radius;
	
	printf("Area = %f \n", area);
	printf("Circumference = %f", circumference);
	
	return 0;
}