#include <stdio.h>
#include <math.h>

int main(){
	float x , y , sum;
	
	printf("Please Enter First Number : ");
	scanf("%f",&x);
	
	printf("Please Enter Second Number : ");
	scanf("%f",&y);
	
	sum = x + y ;
	
	printf("The integer floor of the sum is %f ",truncf(sum));
}