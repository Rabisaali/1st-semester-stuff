#include <stdio.h>
int main () {
    int n1, n2;
    int min, max, total=0;
    printf("Enetr number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);

    if (n1>n2) {
        min = n2;
        max = n1;
    }
    else {
        min = n1;
        max = n2;
    }

    do {
        if (min%2 != 0) {
            total += max;
        }
        min /= 2;
        max *= 2;
    } while (min >=1);
    
    printf("%d", total);
}