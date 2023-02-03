#include <stdio.h>

void main(void)
{

  int i,n,c=3,x = 0, y = 1;
  int temp = x + y;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("\nFibonacci Series: %d %d ", x, y);

  while (c <= n)
    {
    printf("%d ", temp);
    x = y;
    y = temp;
    temp = x + y;
    c++;
    }


}
