#include <stdio.h>
int main () {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int num = n&1;

    if (num==0) {
        printf("the number is even\n");
    }
    else {
        printf("the number is odd\n");
    }

}