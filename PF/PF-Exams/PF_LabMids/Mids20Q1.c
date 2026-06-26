#include <stdio.h>
int main () {
    int n;
    printf("Enetr a number: ");
    scanf("%d", &n);
    char c = 'A';

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            printf("%c ", c+i);
        }
        printf("\n");
    }
}
