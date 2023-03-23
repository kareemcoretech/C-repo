/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 15 12 2022 

- Description of task: Assignment 2
	Write a C code that define 3 int variables x, y and z and 3 pointers to int p, q 
    and r. Set x, y, z to three distinct values.
    Set p, q, r to the addresses of x, y, z respectively.
    a- Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
    b- Print the message: Swapping pointers.
    c- Execute the swap code: r = p; p = q; q = r;
    d- Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
*/

#include <stdio.h>

void print(int x, int y, int z, int* p, int* q, int* r);

void main(void){
    int x = 54;
    int y = 65;
    int z = 23;

    int* p = &x;
    int* q = &y;
    int* r = &z;

    print(x,y,z,p,q,r);
   
    printf("Swapping pointers\n");
    
    r = &x;
    p = &y;
    q = &z;

    print(x,y,z,p,q,r);
}

void print(int x, int y, int z, int* p, int* q, int* r){
    printf("x =  %d\n", x);
    printf("y =  %d\n", y);
    printf("z =  %d\n", z);
    printf("p =  %p\n", p);
    printf("q =  %p\n", q);
    printf("r =  %p\n", r);
    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("*r = %d\n",*r);
    
    printf("\n");
}
