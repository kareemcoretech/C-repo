#include <stdio.h>
#include "datatypes.h"

typedef struct
{
	u8 name[20];
	u16 roll;
	f32 mark;
	
	
	
}student;


int main()
{
	student s;
	printf("Entering information:\n");
		printf("Enter name: ");
			scanf("%s", &s.name );
		printf("Enter roll no.: ");
			scanf("%d", &s.roll );
		printf("Enter marks: ");
			scanf("%f", &s.mark );
		
	printf("Displaying information: \n");
		printf("name: %s\n",s.name);
		printf("roll: %d\n",s.roll);
		printf("mark: %.1f\n",s.mark);
	
	
}