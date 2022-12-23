#include <stdio.h>
int main(){
int x,y;
printf("pls enter the two integer :\n");
scanf("%d",&x);
scanf("%d",&y);
if (x%y==0){
	printf("the first num is multiple of the second num ");
}	
else {
	printf("the first num is not multiple of the second num");
}
}