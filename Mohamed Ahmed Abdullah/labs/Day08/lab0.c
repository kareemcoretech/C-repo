#include <stdio.h>
#include "STD_TYPES.h"

// u: unsigned  
// s: signed   
// f: float point

void main(void){
	char u = 128;
	printf("%d", u); // -1

	u8 x = 20;
    s16 y = -30;
    f32 z = 10.23;

	printf("%d\n", x);
	printf("%d\n", y);
	printf("%f\n", z);

	// 							Building Proccess
	// file.c -> ( (tool chain):
	//					-> (Preprocessor) -> intermediate file 
	// 					-> (Compiler) Compiling process:
	// 						-> symbol table: object  state (provided,needed)
	// 						-> Assembly file
	// 					-> (Assembler) -> object file 
	// 					-> (linker): See the whole picture:
	//						object verification:
	//							1- make suer that every needed object is provided
	//							otherwise: 
	//								"linker error": undefined reference to bla bla
	//							2- make suer that every needed and provided object is provided only once
	//							otherwise: 
	//								"linker error": multiple definition of bla bla
	// 			  ) 
	// -> file.exe
	
	//								Variables
	//						local				global
	//
	// location			RAM (stack)			RAM (.data, .bss)
	// life time		Function life		Program life
	// scope			Function scope		program scope
	//								
	// 1- static (Modifier): static u8 x;
	// location			RAM (.data, .bss)	RAM (.data, .bss)
	// life time		program life		Program life
	// scope			Function scope		file scope
	//
	// 2- extern (Modifier): extern u8 x;
	// location		No location (1st loc)	No location (1st loc)
	// life time		Function life		Program life
	// scope			Function scope		program scope
	//
	// 3- register (Modifier): register u8 x;
	// location			GPRS or Ram				N/A
	// life time		Function life			N/A
	// scope			Function scope			N/A
	//			Store in GPRS (General Purpose Registers) in RAM	
	// 		1- Commonly used ++
	//		2- Life time = local ++
	//		3- Size ++
	//
	// 4- const (Modifier): const u16 c = 10; 
	// 					x=20; => compiler error
	//				Promise not to change variable value
	//		- const with pointer: 
	//			- int* const ptr =  &x; -> constant pointer to variable data (point to fixed loc).
	//							Array is const pointer
	//			prt = &y; => error , *ptr = 20; => no error , 
	//			- int const *ptr = &x; -> variable pointer to constant data
	//			ptr = &y; => no error, *ptr = 20; => error
	//			- const * const ptr = &x; -> constant pointer to constant data
	//			ptr = &y; => error, *ptr = 20; => error
	//		- constant variable hacking: (tool chain dependent)
	//			int * ptr = &x; // x is constant = 10;
	//			*ptr = 30;
	//			printf("%d", x); // => 30 if x is local
	// 5- auto (Modifier)
	//						Not Modify Anything 
	// 					(some compilers see it as error)
} 