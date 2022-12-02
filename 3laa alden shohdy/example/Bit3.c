#include<stdio.h>
int main()
          {
			int x;  
             scanf("%d",&x);
			 if(0<=x&&x <50)
			 {
				 printf("failed",x);
				
			 }
			  else if(50<=x &&x<65)
			  {
				  printf("normal",x);
			  }
			   else if(65<= x&&x<75 )
			  {
				  printf("good",x);
			  }
			  else if(75<= x&&x<85  )
			  {
				  printf("very good",x);
			  }
			  
			  else if(85 <= x)
			  {
				  printf("excellent",x);
			  }
			  
			  
			  
		  }