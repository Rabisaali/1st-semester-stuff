#include <stdio.h>
int main () {
    int pin;
    printf("Enter your pin: ");
    scanf("%d", &pin);

    if (pin == 1234) 
        printf("Access Granted\n");
    else
        printf("Access Denied\n");
    return 0;
}