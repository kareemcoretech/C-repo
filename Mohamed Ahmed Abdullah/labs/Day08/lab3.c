#include <stdio.h>
#include "STD_TYPES.h"

// u: unsigned  
// s: signed   
// f: float point

void main(void){
    // Keyword datatypes
    printf("the size of u8  is %d bytes\n", sizeof(u8)); 
    printf("the size of u16 is %d bytes\n", sizeof(u16)); 
    printf("the size of u32 is %d bytes\n", sizeof(u32)); 

    printf("the size of s8  is %d bytes\n", sizeof(s8)); 
    printf("the size of s16 is %d bytes\n", sizeof(s16)); 
    printf("the size of s32 is %d bytes\n", sizeof(s32)); 

    printf("the size of f32 is %d bytes\n", sizeof(f32)); 
    printf("the size of f64 is %d bytes\n", sizeof(f64)); 


} 