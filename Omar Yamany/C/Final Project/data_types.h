typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short int u16;
typedef signed short int s16;
typedef unsigned long int u32;
typedef signed long int s32;

typedef float f32;
typedef double f64;
typedef long double f128;

typedef struct nn
{
	u32 ID;
	u8 name[200];
	u8 gender[7];
	u8 age;
	struct nn *next;
}patient;

typedef struct tt
{
	u8 slot_number;
	u8 reserved_flag;
	u8 slot_time[14];
	u32 reserved_ID;
	struct tt *next;
}time_slot;