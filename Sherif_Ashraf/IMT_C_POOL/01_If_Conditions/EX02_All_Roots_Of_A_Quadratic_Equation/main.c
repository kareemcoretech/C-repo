#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	float a,b,c,root1,root2,discriminant,imaginary;
	printf("Enter Values Of a, b, c Of Quadratic Equation (aX^2 + bX + c):");
	fflush(stdout);
	scanf("%f%f%f", &a, &b, &c);
	discriminant = (b*b) - (4*a*c);
	if(discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Two Distinct And Real Roots Exists: %.2f And %.2f", root1, root2);
	}
	else if(discriminant == 0)
	{
		root1 = -b / (2*a);
		root2 = -b / (2*a);
        printf("Two Equal And Real Roots Exists: %.2f And %.2f", root1, root2);
	}
	else
	{
		root1 = -b / (2*a);
		root2 = -b / (2*a);
		imaginary = sqrt(-discriminant) / (2*a);
		printf("Two Distinct Complex Roots Exists: %.2f + i%.2f And %.2f - i%.2f", root1, imaginary, root2, imaginary);

	}
}
