#include <stdio.h>

int main(){
	char character;

    printf("Enter the character: ");
    scanf("%c",&character);

    char lowerCharacter;

    if((character >= 65) && (character <= 90) || (character >= 97) && (character <= 122)){
        if((character >= 65) && (character <= 90)){
            lowerCharacter = character + 32;
        }
        printf("The lower character is %c", lowerCharacter);
    }else{
        printf("The character is not alphabet");
    }
	
	return 0;
}