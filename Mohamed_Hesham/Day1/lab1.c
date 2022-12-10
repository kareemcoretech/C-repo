	// Mohamed Ahmed

	/*

	Mohamed
	Ahmed

	*/



	/* Datatypes 
	char --> 1 byte
	int  --> 4 byte
	float  --> 4 byte
	double --> 8 byte
	*/
	
	
	
	/* Declaration (doesn't take any memory consumption)
	datatype variable_name semi_column
	int variable;

	*/
	
	// initiaze with 0 value ??
	
	
	/* Initialization of already declared variable
	variable_name = value semi_column
	variable = 5;

	*/
	

	/* Declaration + Initialization 
	datatype variable_name = value semi_column
	int variable = 5;
	
	*/
	
	
	/* Escape (cannot be used in scanf())
	
	/n --> new line
	/t --> tab
	*/
	
	
	/* Print sequence
	
	printf("string or/and format specifier or/and escape sequence", variable_names in the same order of their format specifiers)
	

	*/
	
	// Run Sequence on cmd
	/*
	1- gcc source_code_file_name -o executable_file_name
	2- executable_file_name
	
	*/
	
	// create own library on cmd
	
	/*
	1- gcc source_code_file_name function_file_name -o executable_file_name
	2- executable_file_name
	
	example
	1- gcc lab11.c linear_search.c -o lab11.exe
	2- lab11.exe
	*/
#include <stdio.h>

int main(){


	//int c = "A";
	//printf("%c", c);
	
	printf("Lab 1 Results \n");
	
	char x = 65;
	
	printf("Character = %c \t , x = %d \n", x, x);
	
	int y = 65;
	printf("Character = %c\n", y);
	
	printf("y = %d\n", y);
	
	int r;
	scanf("%d", &r);
	printf("r = %d\n", r);
	printf("r location = %d\n", &r);
	

	//char y = 300;
	//printf("%d", y);


}