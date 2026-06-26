#include <stdio.h>
int main () {
    int n=10;
    int a=0, b=1;
    
    printf("%d %d ", a, b);
    //n-2 beacuse two terms have already been printed
    for (int i=0; i<n-2; i++) {
        int sum = a+b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }
    return 0;
}