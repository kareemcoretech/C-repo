/*
    Author: Mohamed Ahmed Abdullah
    Version : 1.0
    Description of task: 
        Write a login program in C that ask the
        user to enter his ID and his password, if
        the ID is correct the system will ask the
        user to enter his password up to 3 times,
        if he enters the password right the systems
        welcomes him, if the three times are wrong,
        the system print No more tries. if the user 
        ID is incorrect the system print You are not
        registered.
    Date: 13 12 2022 
*/

#include <stdio.h>

void main(void){
    char user[] = {'M', 'o', 'h', 'a', 'm','e','d'};
    int size = sizeof(user)/sizeof(user[0]);

    int validId = 1234;
    int id;

    int validPassword = 7788;
    int password;

    int valid = 0;
    
    printf("Please Enter your ID: ");
    scanf("%d", &id);

    if (id != validId)
    {
        printf("You are not registered \n");
        return;
    }else{
        printf("Please Enter your Password: ");
        scanf("%d", &password);
        for (int i = 1; i < 3; i++)
        {
            if (password == validPassword)
            {
                valid = 1;
                break;
            }
            printf("Try again: ");
            scanf("%d", &password);        
        }
    }

    if (valid == 1)
    {
        printf("Welcome ");
        for (int i = 0; i < size; i++)
        {
            printf("%c", user[i]);
        }
    }else{
        printf("Incorrect password for 3 times. No more tries");
    }
    return;
}