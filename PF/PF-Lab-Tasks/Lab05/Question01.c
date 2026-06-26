#include <stdio.h>
int main () {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 50) {
        if (marks >= 85) {
            printf("Passed with Distinction!\n");
        }
        else {
            printf("Just Passed\n");
        }
    }
    else {
        printf("You Failed!\n");
    }
    return 0;
}