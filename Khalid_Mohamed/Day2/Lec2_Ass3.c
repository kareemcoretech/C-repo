#include <stdio.h>

 
int main()
{
    char character;
  
  
    printf("Enter any CHARACTER: ");
    scanf(" %c",&character);
  
    
 
    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
       printf("Character is an ALPHABET.");
    
	}	
	 else  
	 {
        printf("Character is not ALPHABET.");
      
	 }
}