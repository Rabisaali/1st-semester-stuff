#include <stdio.h>
int main () {
    int a, b;
    printf("enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);

    int num = a^b;
    if (num == 0) {
        printf("the two numbers are equal\n");
    }
    else {
        printf("The two numbers are unequal\n");
    }
    return 0;
}