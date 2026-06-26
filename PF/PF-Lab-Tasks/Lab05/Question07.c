#include <stdio.h>
int main () {
    int num1, num2, num3;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);

    num1>num2?
        (num1>num3? printf("%d is the greatest number\n", num1): printf("%d is the greatest number\n", num3)):
        (num2>num3? printf("%d is the greatest number\n", num2): printf("%d is the greatest number\n", num3));
}