#include <stdio.h>
void repeat (int y);
int y,i;
int arr[10];

void main(void)
{


printf("please enter array size : ");
scanf("%d",&y);
printf("\nPlease enter the array digit by digit : \n");

repeat(y);

}
void repeat (int y)
{ int f=0;
    for (i=0;i<y;i++)
{
    scanf("%d", &arr[i]);

  }
  for (i=0;i<y;i++)
  {

    if( arr[i]==arr[i+1])
    {
    printf("The number is %d and located in %d",arr[i],i);
    f=0;
        break;
    }
    else
        {
             f=1;

        }
  }
  if (f==1)
  {
      printf("\nNot found\n");
  }
}
