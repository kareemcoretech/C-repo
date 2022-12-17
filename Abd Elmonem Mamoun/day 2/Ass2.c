#include <stdio.h>
int main(){
	int x,y,x1,x2,x3,x4;
	char z;
	printf("pls enter the operator +or-or*or/ :");
	scanf("%c",&z);
	printf("pls enter num 1:\n");
	scanf("%d",&x);
	printf("pls enter num 2:\n");
	scanf("%d",&y);
	switch(z){
		case '+':
        x1=x+y;
		printf("the result is :%d",x1); break;
		case '-':
		x2=x-y;
		printf("the result is :%d",x2); break;
		case '*':
		x3=x*y;
		printf("the result is :%d",x3); break;
		case '/':
		x4=x/y;
		printf("the result is :%d",x4); break;
	default:
	printf("wrong"); break;
	}
}