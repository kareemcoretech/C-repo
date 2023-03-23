
void creat_ID_linkedlist(void)
{
    node *n=(node*)malloc(sizeof(node));
    n->name;
    n->age;
    n->gender;
	n->id;
	n->next=NULL;
	head=n;
}

void search (u16 x)
{
    node *search=head;
	while(search!=NULL)
	{
		if(search->id==x)
		{
			printf("\nThe ID %d is already taken\n",x);
		}
        search=search->next;
	}
}
void insert (node *add)
{

		if(head!=NULL)
	{
        node *s=(node*)malloc(sizeof(node));

        s->name[50]=add->name[50];
		s->age=add->age;
		s->gender[6]=add->gender[6];
		s->id=add->id;

		s->next= head;
		head=s;


			}
	else
	{
		creat_ID_linkedlist();
	}

}



u8 searchifnot (u16 x)
{
    u8 flag;
    node *searchifnot=head;
	while(searchifnot!=NULL)
	{
		if(searchifnot->id!=x)
		{
			flag=1;
		}
		else
        {
            flag=0;
            break;


        }

        searchifnot=searchifnot->next;
	}
	return flag;
}
void disp (u16 x)
{
     node *print=head;

	while(print!=NULL)
	{
	    if(print->id==x)
		{

	//	printf("\n\tName : %s\n\tAge : %d\n\tGender : %s\n\tID : %d\n",first.name,print->age,first.gender,print->id);
				printf("\n\tName : %s\n\tAge : %d\n\tGender : %s\n\tID : %d\n",first.name,print->age,first.gender,print->id);


		}
        print=print->next;

	}

}







void creat_slot_linkedlist(void)
{
	res *k=(res*)malloc(sizeof(res));
	k->id ;
	k->reservation[5];
	k->reserved_flag=0;
	k->then= NULL;
	header=k;

}
void insert_slot(u16 copyid, u8 copyreservation)
{

        res *f=(res*)malloc(sizeof(res));

		f->id=copyid;
        switch(copyreservation)
                                {

                                case 1: f->reservation[0]=copyreservation;
                                break;
                                case 2: f->reservation[1]=copyreservation;
                                break;
                                case 3: f->reservation[2]=copyreservation;
                                break;
                                case 4: f->reservation[3]=copyreservation;
                                break;
                                case 5: f->reservation[4]=copyreservation;
                                break;

                                    }

		f->reserved_flag=1;
		f->then= header;
		header = f;

}

u8 search_id (u16 x)
{
    u8 flag;
	res *search=header;
	while(search!=NULL)
	{
		if(search->id==x)
		{
			//printf("\nYour ID : %d\nYour reservation is %d\n",search->id,search->reservation);
			flag=1;
		}
		else
        {
            flag=0;


        }
            search=search->then;
	}
	return flag;
}
void search_free_slot(void)
{   u8 i;
    res *search=header;
	while(search!=NULL)
	{
		if(search->reserved_flag==0)
		{
		    for(i=0;i<5;i++)
            {
            printf("\nthere is a free slot number %d\n",search->reservation[i]);

            }
		}

            search=search->then;
    }
}
void userdisp (u16 x)
{     u8 i;
     res *print=header;

	while(print!=NULL)
	{
	    if(print->id==x)
		{

                printf("\n\tID : %d\n\tReservation : %d\n",print->id,print->reservation);




		}
        print=print->then;

	}

}
