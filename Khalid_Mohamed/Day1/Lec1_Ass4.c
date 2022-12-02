#include <stdio.h>
#include <math.h>
float radius ;
float area ;
float circumference ; 
int main (){
	printf ("Please enter the redius \n");
	scanf (" %f",&radius);
     area = ( 3.14 *radius*radius) ;
	 circumference = (2 * 3.14 * radius ) ;
	printf ("The area of the circle is  :  %f  \n",area);
	printf ("The circumference of the circle is :  %f  \n", circumference);
}