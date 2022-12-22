#include<stdio.h>
int main(){
	int i;
	int y;
	int r;
	printf("Enter number of rows:");
	scanf("%d",&r);
	for(i=1;i<=r;i++){
		for(y=1;y<=r-i;y++){
			printf("* ");
		}
		printf("\n");
	}
}