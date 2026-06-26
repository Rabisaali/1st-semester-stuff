#include <stdio.h>
int main () {
    int x,y,z;
    printf("Enter number 1: ");
    scanf("%d", &x);
    printf("Enetr number 2: ");
    scanf("%d", &y);
    printf("Enter number 3: ");
    scanf("%d", &z);

    if (x>y) {
        if (x>z) {
            printf("The largest value is %d", x);
        }
        else {
            printf("The larest value is %d", z);
        }
    }
    else {
        if (y>z) {
            printf("The largest value is %d", y);
        }
        else {
            printf("The largest value is %d", z);
        }
    }
    return 0;
}