#include <stdio.h>

int gcd (int a, int b) {
    int min;
    if (a>b)  min=b;
    else min=a;

    for (int i=min; i>=1; i--) {
        if ((a%i == 0) && (b%i == 0)) {
            return i;
        }
    }
}
int main () {
    int x1, x2;
    scanf("%d %d", &x1, &x2);
    int ans = gcd(x1, x2);
    printf("%d\n", ans);
}