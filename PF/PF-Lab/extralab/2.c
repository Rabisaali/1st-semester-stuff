#include <stdio.h>
int main () {
    int a;
    printf("Enter number a: ");
    scanf("%d", &a);
    int b;
    printf("Enter number b: ");
    scanf("%d", &b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("Now number a is %d and number b is %d\n", a, b);

    return 0;
}