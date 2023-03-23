void insert_new_record(); //Add new patient record (inserts at first if head points to null, and inserts at end otherwise)
u16 unique_ID_check(u32 sent_ID); //function that returns 0 if ID was found at any node in linked list, returns 1 if ID is unique
void edit_patient_record(); // Main menu of edit record mode
void import_patients_data(); //reads patients' linked list to patients_data.txt
void export_patients_data(); //saves patients' linked list to patients_data.txt
void display_as_table(); //displays all nodes in linked list in a table
void display_single_node(patient *node); //displays data of a single node in a linked list
void edit_age(u32 ID, u8 new_age); // edit age of specific node
void edit_ID(u32 ID, u32 new_ID); // edit ID of specific node
void edit_gender(u32 ID, u8 new_gender[]); // edit gender of specific node
void edit_name(u32 ID, u8 new_name[]); // edit name of specific node
void remove_patient_record(); //main menu of remove patient record
void remove_node(u32 remove_ID); // remove a patient record
void reserve_slot_menu(); // main menu of reserve a time slot with the doctor
void reserve_time_slot(u8 slot_n); // Reserve a time slot
void initialize_timeslots(); //initialization for time slots linked list nodes
void view_reserved_timeslots(); // views reserved time slots
void remove_reservation_menu(); //main menu of cancel a reservation
void cancel_reservation(u8 slot_n); // cancel a reservation