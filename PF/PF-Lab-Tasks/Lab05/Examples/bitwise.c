#include <stdio.h>
int main () {
    /*int a = 4;
    int b=3;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("%d %d\n", a, b);
    printf("%o", a<<1);*/
    int n1 = 4;
    int n2 = 5;
    int n3 = -4;
    printf("%d\n", n1^n2);
    printf("%d", ~n3);

    if (n1&n2) {
        printf("\nValue is %d\n", n1&n2);
    }
    else {
        printf("None\n");
    }

    printf("Hello World\n");

    if (n1|n2) {
        printf("Value is %d\n", n1|n2);
    }
    else {
        printf("None\n");
    }

    printf("%d", n1<<1);
    return 0;
}