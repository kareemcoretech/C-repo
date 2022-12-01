#include <stdio.h>

int main()
{
	char lowercase;
	int uppercase,ascii_code = 32;

	printf("Enter Char To Change From Lowercase To Uppercase \n");
	scanf(" %c",&lowercase);

	uppercase = lowercase - ascii_code;

	printf("Char After Change To Uppercase : %c",uppercase);

}