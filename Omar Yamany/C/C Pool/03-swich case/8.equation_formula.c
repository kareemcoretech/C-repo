#include <stdio.h>
#include <math.h>

void main()
{
	float a,b,c,root1,root2,imaginary,discriminant;
	printf("Enter the value of a: ");
	scanf("%f", &a);
	printf("Enter the value of b: ");
	scanf("%f", &b);
	printf("Enter the value of c: ");
	scanf("%f", &c);
	discriminant=((b*b)-(4*(a*c)));
	switch(discriminant>0)
	{
		case 1:
		root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
        break;
		
		case 0:
		switch(discriminant < 0)
        {
            case 1:
                /* If discriminant is negative */
                root1 = root2 = -b / (2 * a);
                imaginary = sqrt(-discriminant) / (2 * a);
                printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", root1, imaginary, root2, imaginary);
                break;

                case 0:
                /* If discriminant is zero */
                root1 = root2 = -b / (2 * a);
                printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
                break;
            }
		
	}
	
}