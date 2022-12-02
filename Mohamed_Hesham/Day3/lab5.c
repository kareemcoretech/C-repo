#include <stdio.h>

int main(){
	int s = 0;
	int input;
	int result;
	printf("Enter the number to display its multiplication table: ");
	scanf("%d", &input);
	while( s < 6 ){
		s += 1;
		result = input * s;
		printf("%d x %d : %d\n", input, s, result);
		
	}
}