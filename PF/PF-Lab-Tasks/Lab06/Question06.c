#include <stdio.h>
#include <stdlib.h>
int main () {
    int n=7;
    for (int i=2; i<n; i++) {
        if (n%i == 0) {
            printf("The number is not prime\n");
            exit(0);
        }
    }
    printf("The number is prime\n");
    return 0;
}