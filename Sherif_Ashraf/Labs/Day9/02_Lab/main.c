#include<stdio.h>
#include"datatypes.h"




typedef struct cars
{
	u8 *model;
	u8 *ownerName;
	u16 carNumber;
	u32 serial;

}car,bmw,amg;

void main(void)
{
	car evo = {"evo","sherif",1051,1102000};
	bmw m5 ={"m5","xo",1666,51216161}; 
	amg amg5 ={"amg5","ssss",50,51216001};


	printf("car model: %s\n",evo.model);
	printf("car owner: %s\n",evo.ownerName);
	printf("car number: %d\n",evo.carNumber);
	printf("car serial: %d\n",evo.serial);

	printf("\n \n");

	printf("bmw model: %s\n",m5.model);
	printf("bmw owner: %s\n",m5.ownerName);
	printf("bmw number: %d\n",m5.carNumber);
	printf("bmw serial: %d\n",m5.serial);

	printf("\n \n");

	printf("amg model: %s\n",amg5.model);
	printf("amg owner: %s\n",amg5.ownerName);
	printf("amg number: %d\n",amg5.carNumber);
	printf("amg serial: %d\n",amg5.serial);
}