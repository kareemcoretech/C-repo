#include <stdio.h>
#include <stdlib.h>

int getBit(int n, int i){
	return (n >> i) & 1;
}

void printBinaryNum(int n){
	for (int i = 7; i >= 0; i--)
	{
		int bit = getBit(n,i);
		printf("%d", bit);
	}	
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	printBinaryNum(n);
}