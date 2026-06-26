#include <stdio.h>
int main () {
    int num;
    int sum = 0;
    scanf("%d", &num);
    while (num != -1) {
        sum += num;
        scanf("%d", &num);
    }
    printf("%d", sum);
    return 0;
}