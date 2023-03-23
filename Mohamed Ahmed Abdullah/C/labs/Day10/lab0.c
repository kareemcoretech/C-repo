// 							Building Proccess
//
// file.c -> ( (tool chain):
//					-> (Preprocessor) -> intermediate file (file.e)
// 			 file.e -> (Compiler) Compiling process:
// 						-> symbol table: object  state (provided,needed)
// 						-> Assembly file (file.asm)
// 		   file.asm -> (Assembler) -> object file (file.o)
// 			 file.o -> (linker): See the whole picture:
//						object verification:
//							1- make suer that every needed object is provided
//							otherwise: 
//								"linker error": undefined reference to bla bla
//							2- make suer that every needed and provided object is provided only once
//							otherwise: 
//								"linker error": multiple definition of bla bla
// 			  
//			) -> file.exe or file.hex or file.elf etc..


#include <stdio.h>

// #include
#include "STD_TYPES.h" // Relative path 
// #include "C:\Users\moham\OneDrive\Desktop\MohdAhmed\Learning\Embedded System\IMT\C-Repo\C-repo\Mohamed Ahmed Abdullah\labs\Day10\STD_TYPES.h" // Absolute path

#define Bit0 0 // macro

#define set(number,x) number |= (1 << x) 
#define clear(number,x) number &= ~(1 << x)
#define toggle(number,x) number ^= 1 << x
#define read(number,x) (number >> x) & 1

void main(void){
	int x;
	scanf("%d", &x);
	printf("x = %d\n", x);
	
	x = set(x,Bit0);
	printf("x after set bit0 = %d\n", x);
	
	x = clear(x,Bit0);
	printf("x after clear bit0 = %d\n", x);
	
	x = toggle(x,Bit0);
	printf("x after toggle bit0 = %d\n", x);
	
	int bit = read(x,0);
	printf("bit num 0 = %d\n", bit);
}
