#include <stdio.h>

int main(){
	int first;
	int second;
	int result;
	
	while (1){
		printf("Enter the first number: ");
	    scanf("%d", &first);
	
	    printf("Enter the second number: ");
		scanf("%d", &second);
		result = first + second;
		printf("The result is: %d\n", result);
	}
}