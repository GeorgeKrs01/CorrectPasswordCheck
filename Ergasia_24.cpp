#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char account[50];
char account_correct[] = "account";
char password[50];
char password_correct[] = "password";
int tries = 0;

int main(void) {
    
    while(tries < 3){
        printf("\n Enter account: ");
        gets(account);
        
        
        printf("\n Enter password: ");
        gets(password);
        
        
        if(strcmp(account_correct, account) == 0 && strcmp(password_correct, password) == 0){
            printf("Correct \n");
        }else{
            printf("wrong \n");
        } 
        tries++;
    
    }
    printf("\n Out of tries \n");

    
    return 0;
}
