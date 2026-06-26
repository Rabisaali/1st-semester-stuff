#include <stdio.h>
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if ((n%2)==0 && (n%3)==0) {
        printf("The number is divisible by 2 and 3\n");
    }
    else {
        printf("The number is not divisible by 2 and 3\n");
    }
    return 0;
}