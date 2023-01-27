#include <stdio.h>
#include <math.h>

void main()
{
	float a,b,c,x,y,z;
	printf("Enter the value of a: ");
	scanf("%f", &a);
	printf("Enter the value of b: ");
	scanf("%f", &b);
	printf("Enter the value of c: ");
	scanf("%f", &c);
	z=((b*b)-(4*(a*c)));
	if(a==0 && b==0)
		printf("no solution!");
	else if(a==0)
	{
		x=(-c/b);
		printf("One root = %f", x);
	}
	else if(z<0)
		printf("no roots");
	else
	{
		x = (-b+(pow(z, 0.5)))/(2*a);
		y = (-b-(pow(z, 0.5)))/(2*a);
		printf("First root = %f\n", x);
		printf("Second root = %f", y);
	}
}