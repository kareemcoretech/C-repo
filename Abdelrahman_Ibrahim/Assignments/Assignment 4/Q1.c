#include <stdio.h>
#include <math.h>


int main() {
	
    int x;
	int y=3;
    int result;
	
    printf("Enter a number: ");
    scanf("%d", &x);
    
    result = pow(x, y);
    printf("Cube = %d", result);
    return 0;
}
