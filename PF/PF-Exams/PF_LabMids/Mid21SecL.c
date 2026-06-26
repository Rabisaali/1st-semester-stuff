#include <stdio.h>
int main () {
    int n;
    printf("enetr a number: ");
    scanf("%d", &n);
    for (int i=7; i >= 0; i--) {
        printf("%d", (n>>i)&1);
    }
}