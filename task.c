#include <stdio.h>
typedef struct {
	char flag[5];
    char username[20];
    char password[20];
} User;

typedef union {
    char flag;
    User user;
} RegistrData;

int main() {
    RegistrData rd;
    
    
    // Registration
    printf("Registration\n");
    printf("Enter a username: ");
    scanf("%s", rd.user.username);
    printf("Enter a password: ");
    scanf("%s", rd.user.password);
    printf("Enter a flag: ");
    scanf("%s", rd.user.flag);
	
    
    
    // Login
    printf("\nLogin\n");
        char inputUsername[20];
        char inputPassword[20];
        printf("Enter your username: ");
        scanf("%s", inputUsername);
        printf("Enter your password: ");
        scanf("%s", inputPassword);
        
    if (rd.flag =='1') {
            printf("valid login");
        }
    else {
        printf("not valid login");
    }
    
    return 0;
}