#include <stdio.h>
int main ()
{
    int num1;
    int num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Your numbers have been swapped\nNow number 1 is %d and number 2 is %d\n", num1, num2);
    return 0;
}