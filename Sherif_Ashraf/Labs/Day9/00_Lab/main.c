#include<stdio.h>
#include"datatypes.h"


struct employees
{
	u8 *name;
	u8 id;
	u16 salary;
};



void printstruct(struct employees func);
void main(void)
{	


	struct employees sherif ={"sherif",0,1000};

	printstruct(sherif);

}

void printstruct(struct employees func)
{
		printf("%s\n",func.name);
		printf("%d\n",func.id);
		printf("%d\n",func.salary);
}

