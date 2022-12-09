#include <stdio.h>

int main(){
	int x, y, sum;
	while(1){
		printf("Please enter first number: ");
		scanf("%d", &x);
		printf("Please enter second number: ");
		scanf("%d", &y);
		sum = x + y;
		printf("The result is: %d\n\n\n\n\n", sum);
	}
}