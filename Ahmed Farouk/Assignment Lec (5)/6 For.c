#include <stdio.h>

void main(void)
{

  int i, n, x = 0, y = 1;
  int temp = x + y;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("\nFibonacci Series: %d %d ", x, y);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i)
    {
    printf("%d ", temp);
    x = y;
    y = temp;
    temp = x + y;
    }


}
