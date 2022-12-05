#include <stdio.h>

void main(void) {

  int num,flag = 0;
  printf("Enter Positive Number \n");
  scanf("%d",&num);

  if (num == 0 || num == 1)
    flag = 1;

  for (int i = 2; i <= num / 2; ++i) 
  {
    if (num % i == 0) {
      flag = 1;
    }
  }

  if (flag == 0)
    printf("%d Prime Number",num);
  else
    printf("%d Not Prime Number",num);

}