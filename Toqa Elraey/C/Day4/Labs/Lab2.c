#include <stdio.h>
void swap(int x, int y);

int num1, num2;

int main(){
	printf("X before swap: ");
	scanf("%d", &num1);
	printf("Y before swap: ");
	scanf("%d", &num2);
	
	swap(num1, num2);
}

void swap(int x, int y){
	int z = x;
	x = y;
	y = z;
	printf("X after swap: %d\n", x);
	printf("Y after swap: %d\n", y);
}