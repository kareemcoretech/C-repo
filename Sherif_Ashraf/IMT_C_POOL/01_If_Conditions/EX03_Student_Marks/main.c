#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int bio,chm,comp,phy,math,per=0;
	printf("Enter Marks Of Five Subjects \n");
	fflush(stdout);
	scanf("%d%d%d%d%d",&bio,&chm,&comp,&phy,&math);
	per = (bio + chm + comp + phy + math)/5.0;
	if(per>=90)
		printf("Percentage = %d \nGrade A",per);
	else if(per<90 && per>=80)
		printf("Percentage = %d \nGrade B",per);
	else if(per<80 && per>=70)
		printf("Percentage = %d \nGrade C",per);
	else if(per<70 && per>=60)
		printf("Percentage = %d \nGrade D",per);
	else if(per<60 && per>=40)
		printf("Percentage = %d \nGrade E",per);
	else
		printf("Percentage = %d \nGrade F",per);

}
