#include <stdio.h>


void main(void)
{
	char *ptr = "kareem"; // 7 character with '\0'
	                      // soradge in static memory reagon in Flash
	
	                     
	for(int i=0 ; ptr[i]!='\0' ; i++) 
	{
		printf("%c", ptr[i]);  // print same the array 
	}
	 
	ptr = "Reem" ; // ALLOCATE VALUE IN POINTER NOT SAME THE POINTER TO CAHR
	printf("\n");
	
	for(int i=0 ; ptr[i]!='\0' ; i++) 
	{
		printf("%c", ptr[i]);  // print same the array 
	}
	
	
	
}