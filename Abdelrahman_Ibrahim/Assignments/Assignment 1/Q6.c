#include<stdio.h>

int main(){
	int x , y , add , sub , A , O , X;
	
	printf("Please Enter Number 1 : ",x);
	scanf("%d",&x);
	
	printf("Please Enter Number 2 : ",y);
	scanf("%d",&y);
	
	add = x+y;
	sub = x-y;
	A = x&y;
	O = x|y;
	X = x^y;
	printf("Sum = %d \n",add);
	printf("Sub = %d \n",sub);
	printf("AND = %d \n",A);
	printf("OR = %d \n",O);
	printf("XOR = %d \n",X);
}