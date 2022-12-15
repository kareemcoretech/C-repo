#include <stdio.h>
int main(){
	int r,a,c;
	printf("pls enter the radius of the circle:");
	scanf("%d",&r);
	a=3.14*r*r;
	c=2*3.14*r;
	printf("the area is :%d\nthe circumference is:%d",a,c);
}