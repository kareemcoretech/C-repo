#include <stdio.h>
#include <math.h>


int main() {
	
    int x,y;
    int result;
	
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter the power: ");
    scanf("%d", &y);

    result = pow(x, y);
    printf("Answer = %d", result);
    return 0;
}
