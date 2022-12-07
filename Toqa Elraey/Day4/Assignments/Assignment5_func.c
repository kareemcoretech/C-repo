#include <math.h>

int roots(float x){
	float square, cubic, check1, check2;
	int z;
	
	square = sqrt(x);
	check1 = truncf(square);
	
	cubic = cbrt(x);
	check2 = truncf(cubic);
	
	if(square == check1){
		z = 1;
	}
	else if(cubic == check2){
		z = 0;
	}
	else{
		z = -1;
	}
	return z;
}