#include <stdio.h>
#include "STD_TYPES.h" // Relative path 

void Print(u8 x);

int main(void){
    Print(0);
	return 0;
}

void Print(u8 x){
    printf("%d\n", x);
    Print(x+1);
}
