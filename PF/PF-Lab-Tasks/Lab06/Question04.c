#include <stdio.h>
int main () {
    int sum=0;
    for (int i=1; i<=100; i++) {
        sum = sum+i;
    }
    printf("\nThe sum of the numbers from 1 to 100 is %d\n", sum);
    return 0;
}