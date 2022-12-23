#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int x=0;
	printf("Enter The Integer You Want To Check \n");
	scanf("%d",&x);
	(x % 2 == 0) ? printf("%d Is Even",x) : printf("%d Is Odd",x);
}
