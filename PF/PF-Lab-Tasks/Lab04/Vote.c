#include <stdio.h>
#include <string.h>
int main () {
    char Nationality[20];
    int Age;
    printf ("Enter your age: ");
    scanf("%d", &Age);

    if (Age >= 18) {
        printf("Enter your nationality: ");
        scanf("%s", Nationality);
        if (strcasecmp(Nationality, "Pakistani") == 0) {
            printf("You are eligible to vote\n");
        }
        else {
            printf("You are ineligible to vote\n");
        }
    }
    else {
        printf("You are ineligible to vote \n");
    }
    return 0;
}