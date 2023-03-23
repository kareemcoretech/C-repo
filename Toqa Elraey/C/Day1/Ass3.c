#include <stdio.h>

int main(){
	char c;
	printf("Enter a Character: ");
	scanf("%c", &c);
	
	if(c >= 65 && c <= 90){
		printf("This is an Upper Case Letter.");
	}
	else if(c >= 97 && c <= 122){
		printf("This in a Lower Case Letter.");
	}
	else{
		printf("This is not a Letter.");
	}
}