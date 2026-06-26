#include <stdio.h>
int main () {
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("How many times do you want to multiply it? ");
    scanf("%d", &num2);

    for (int i=1; i<=num2; i++) {
        printf("%d\tx\t%d\t=\t%d\n", num1, i, num1*i);
    }
    return 0;
}