#include <stdio.h>

int main()
{
	float x,y,sumF;
	int sumI;
	
	printf("Enter two numbers: ");
	scanf("%f %f", &x, &y);
	sumF=x+y;
	sumI=sumF;
	printf("%f\n%d", sumF, sumI);
	
}