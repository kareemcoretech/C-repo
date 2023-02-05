#include <stdio.h>

void PrimeNumbers(int x, int y){
	int count;
	for(int i = x; i <= y; i++){
		count = 0;
		for(int j = 1; j <= i; j++){
			if(i % j == 0){
				count++;
			}
			else{
				continue;
			}
		}
		if(count == 2){
			printf("%d\n", i);
		}
	}
}