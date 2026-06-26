#include <stdio.h>
int main () {
    int n=5;
    int product = 1;
    for (int i=1; i<=n; i++) {
        product = product*i;
    }
    printf("The factorial of number %d is %d", n, product);
    return 0;
}