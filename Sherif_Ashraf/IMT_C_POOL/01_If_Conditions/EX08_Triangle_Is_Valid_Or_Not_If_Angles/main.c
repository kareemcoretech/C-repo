#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int fangle,sangle,tangle;
	printf("Enter First Angle :");
	scanf("%d",&fangle);
	printf("Enter Second Angle :");
	scanf("%d",&sangle);
	printf("Enter Third Angle :");
	scanf("%d",&tangle);
	if(fangle+sangle+tangle == 180 && fangle>0 && sangle >0 && sangle>0)
		printf("Valid Triangle");
	else
		printf("Invalid Triangle");
}
