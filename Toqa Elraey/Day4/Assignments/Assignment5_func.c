#include <math.h>

int roots(float x){
	
	int flag = 0;
	float num = x;
	float i = 1;
	
	while(num > 0){
		num = num - i;
		i = i + 2;
	}
	
	if(num == 0){
		flag = 1;
	}
	
	else{
		if(cbrt(x) == truncf(cbrt(x))){
			flag = 0;
		}
		else{
			flag = -1;
		}
		
	}
	
	return flag;
}