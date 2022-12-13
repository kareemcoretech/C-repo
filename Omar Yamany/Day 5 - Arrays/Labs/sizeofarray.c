#include <stdio.h>

int main()
{
	int sarray[8];
	int sizeofarray = sizeof(sarray)/sizeof(sarray[0]);
	printf("%d", sizeofarray);
}