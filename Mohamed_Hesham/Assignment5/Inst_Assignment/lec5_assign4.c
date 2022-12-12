#include <stdio.h>


int ComputeNth(int start, int limit);

int main(){
	int start;
	printf("Please Enter your Start Point: ");
	scanf("%d", &start);
	int limit;
	printf("Please Enter your Limit Point: ");
	scanf("%d", &limit);
	int output = ComputeNth(start, limit);

	printf("The Nth Output of your start point is: %d", output);
	
	
}

int ComputeNth(int start, int limit){
	
	for (int i = 0; i < limit; i++){
		start += 2;
	
	}
	return start;
}

