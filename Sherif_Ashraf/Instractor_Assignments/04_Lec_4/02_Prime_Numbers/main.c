#include <stdio.h>
#include <stdlib.h>
#include "prime.h"


void main(void) {
    int x=0,y=0;
    printf("Enter Two Numbers Small Number First\n");
    scanf("%d %d",&x,&y);
    get_prime(x,y);
}