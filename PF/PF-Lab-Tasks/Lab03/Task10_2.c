#include <stdio.h>
int main ()
{
    int num1;
    int num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    int difference = num1 - num2;
    num1 = num1 - difference;
    num2 = num1 + difference;

    printf("The two numbers have been swapped\nNow number 1 is %d and number 2 is %d", num1, num2);
    return 0;
}