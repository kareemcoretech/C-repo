/*a to z 97 to 122
  A to Z 65 to 90
  97= 65 + 32
  a =A+32
  A =a-32*/
#include <stdio.h>
int main (){
	char a,A;
	printf("pls enter lower case latter :");
	scanf("%c",&a);
	A=a-32;
	printf("%c",A);
}