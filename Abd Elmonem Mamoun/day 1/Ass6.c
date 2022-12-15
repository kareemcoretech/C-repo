#include <stdio.h>
int main(){
	int x,y,x1,x2,x3,x4,x5;
	printf("pls enter num 1:");
	scanf("%d",&x);
	printf("pls enter num 2:");
	scanf("%d",&y);
	x1=x+y;
	x2=x-y;
	x3=x&y;
	x4=x|y;
	x5=x^y;
	printf("the sum is:%d\nthe sub is:%d\nanding:%d\noring:%d\nxoring:%d\n",x1,x2,x3,x4,x5);
}