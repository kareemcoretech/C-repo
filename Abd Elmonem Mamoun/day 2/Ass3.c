#include <stdio.h>
int main(){
    char a;
	printf("pls inter char:");
	scanf("%c",&a);
	if ((a>='a'&&a<='z')||(a>='A'&&a<='z')){
		printf("%c is alphabet",a);
	}
	else {
		printf("%c is not alphabet",a);
	}
}