#include <stdio.h>

void primedetector(int lower, int upper){

	int flag = 0;
	
	printf("These are the prime numbers: \n");
	
	for (int val = lower; val < upper; val++){
		for (int i = 2; i < val; i++){
			if (val % i == 0 && val != i){
				flag = 1;
				break;
			}
		}
		
		if (flag == 0){
			printf("%d ", val);
		}
		
	}
	
	

}

int main(){
	int lower;
	int upper;
	
	printf("Please Enter a Lower Limit: ");
	scanf("%d", &lower);
	printf("Please Enter an Upper Limit: ");
	scanf("%d", &upper);
	
	primedetector(lower, upper);
	
	
}