#include <stdio.h>
#include <math.h>

void main(void)
{
    float a,b,c,root1,root2,imaginary,discriminant;

    printf("Enter a, b, c Of Quadratic Equation [aX^2 + bX + c] \n");
    scanf("%f %f %f",&a,&b,&c);
    discriminant = (b * b) - (4 * a * c);

    switch(discriminant > 0)
    {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two Distinct And Real Roots Exists = %.2f and %.2f",root1,root2);
            break;
        case 0:
            switch(discriminant < 0)
            {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);
                    printf("Two Distinct Complex Roots Exists = %.2f + i%.2f and %.2f - i%.2f",root1,imaginary,root2,imaginary);
                    break;
                case 0:
                    root1 = root2 = -b / (2 * a);
                    printf("Two Equal And Real Roots Exists = %.2f and %.2f",root1,root2);
                    break;
            }
    }
}