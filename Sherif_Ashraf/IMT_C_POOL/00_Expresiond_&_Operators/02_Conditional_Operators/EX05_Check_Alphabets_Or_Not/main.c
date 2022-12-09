#include <stdio.h>
#include <stdlib.h>

void main(void) {
	char ch;
	printf("Enter a character \n");
	scanf("%c", &ch);
	((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))?
			printf("%c Is Alphabet",ch):printf("%c Is Not Alphabet",ch);
}
