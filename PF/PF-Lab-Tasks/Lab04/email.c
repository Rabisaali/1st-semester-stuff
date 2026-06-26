#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
    char email[64];
    char password[45];

    printf("Enter your email address: ");
    scanf("%s", email);

    if (strcmp(email, "admin@gmail.com") == 0) {
        printf("Enter your password: ");
        scanf("%s", password);
        if (strcmp(password, "admin123") == 0) {
            printf("You've logged in successfully\n");
        }
        else {
            printf ("Your passowrd is incorrect\n");
            exit(1);
        }
    }
    else {
        printf("Your email address is incorrect\n");
        exit(1);
    }
}