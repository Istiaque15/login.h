#include <stdio.h>
#include <stdlib.h>

int main()
{
   username_password();
   system("cls");
   printf("Hello Istiaque");
   sleep(5);
   system("cls");

  printf("The system is continuing\n\n\n ");

    return 0;
}


void username_password(void){


    char username[15];
    char password[12];


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"Istiaque")==0){
        if(strcmp(password,"123")==0){

        printf("\nWelcome.Login Success!\n");
        printf("Welcome to library Management system");

                }
        else{
    printf("\nwrong password\n");
             }
    }
    else{
    printf("\nUser doesn't exist");
         }


}
