#include<stdio.h>

int main(){
	int R , C , A;
	
	printf("Please Enter The Radius : ",R);
	scanf("%d",&R);
	
	C = 2*(22/7)*R;
	A = (22/7)*R*R ; 
	printf("Circumference =  %d \n",C);
	printf("Area =  %d ",A);
}