#include <stdio.h>

int main(){
	char character;

    printf("Enter the character: ");
    scanf("%c",&character);


    if((character >= 65) && (character <= 90) || (character >= 97) && (character <= 122)){
        printf("The character is alphabet");
    }else{
        printf("The character is not alphabet");
    }
	
	return 0;
}