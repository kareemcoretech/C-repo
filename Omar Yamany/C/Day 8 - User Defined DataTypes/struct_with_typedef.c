#include<stdio.h>
#include"types.h"

typedef struct cars
{
	u8 *model;
	u16 plate_number;
	u32 serial;
}Mazda, BMW;

void main()
{
	Mazda RX7 = {"RX7", 12141, 85112474};
	Mazda RX8 = {"RX8", 24036, 17542368};
	BMW M4 = {"M4", 10243, 325436342};
	BMW Z4 = {"Z4", 40365, 726862458};
	printf("Model\tPlate\tserial\n");
	printf("%s\t%d\t%d\n", RX7.model, RX7.plate_number, RX7.serial);
	printf("%s\t%d\t%d\n", RX8.model, RX8.plate_number, RX8.serial);
	printf("%s\t%d\t%d\n", M4.model, M4.plate_number, M4.serial);
	printf("%s\t%d\t%d\n", Z4.model, Z4.plate_number, Z4.serial);
}