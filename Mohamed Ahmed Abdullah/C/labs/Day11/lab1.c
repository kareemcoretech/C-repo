#include <stdio.h>
#include "STD_TYPES.h" // Relative path 

#define system1 1
#define system2 2
#define system3 3

#define mode system3

int main(void){
	#if mode == system1
	#warning "System 1: warning"
	#elif mode == system2
		#error "System 2 : error"
	#else
		printf("No Error\n");
	#endif 
	printf("Start code...");
	return 0;
}