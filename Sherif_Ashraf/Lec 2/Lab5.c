#include <stdio.h>

int main(){
  int a, b;
  printf("First Number : \n");
  scanf("%d", &a);
  printf("Second Number : \n");
  scanf("%d", &b);
  if(a % b == 0)
  {
    printf("First Is Multiple Of Second");
  }
  else
  {
   printf("First Is Not Multiple Of Second"); 
  }
}