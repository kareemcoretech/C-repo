#include <stdio.h>
int main(){
	int x;
	printf("pls enter the temp :\n");
	scanf("%d",&x);
	if(x>=0&&x<=30){
    printf("the heating time is 7 min\n");		
	}
	else if(x>30&&x<=60){
    printf("the heating time is 5 min\n");		
	}
	else if(x>60&&x<=90){
    printf("the heating time is 3 min\n");		
	}
	else if(x>90&&x<=100){
    printf("the heating time is 1 min\n");		
	}
	else{
    printf("invalid input");		
	}
}