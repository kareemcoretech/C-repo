#include <stdio.h>



int main(){
	int loc_1 = 0;
	int loc_2 = 11;
	
	for (int i = 0; i < 12; i++){
		star_count += 2;
		for (int j = 0; j < loc_2; j++){
			printf(" ");
		}
		for (int j = 0; j < star_count; j++){
			printf("*");
		}
		printf("\n");
		space_count--;			
	}
	
}
*          *
012345678901
 *        *
012345678901
  *      *
012345678901
   *    *
012345678901
    *  *
012345678901
     **
012345678901
	 **
	*  *
   *    *
  *      *
 *        *
*          *