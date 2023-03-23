

void search (u16 x);
u8 searchifnot (u16 x);
void disp (u16 x);

void creat_ID_linkedlist(void);


void creat_slot_linkedlist(void);
void insert_slot(u16 copyid, u8 copyreservation);
u8 search_id (u16 x);

void search_free_slot(void);
void userdisp (u16 x);

typedef struct clinic
{
    u8 name[50];
    u8 age;
    u8 gender[6];
    u16 id;
    struct clinic *next; //creating a pointer named next for a linked list

}patient,node;


 node *head= NULL;
 patient first; //creating object "first" of a data type patient
 node *test;
 void insert (node *add);

typedef struct time
{
    u16 id;
    u8 reservation[5];
    u8 reserved_flag;
    struct time *then;

}res;

res *header=NULL; //a head for the reservation linked list
res person;