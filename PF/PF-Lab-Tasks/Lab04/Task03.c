#include <stdio.h>
int main ()
{
    int number1, number2, number3;
    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);
    printf("Enter number 3: ");
    scanf("%d", &number3);

    if (number1>number2)
    {
        if(number1>number3)
        {
            printf("Number 1: %d is the greatest number\n", number1);
        }
        else
        {
            printf("Number 3: %d is the greatest number\n", number3);
        }
    }
    else
    {
        if(number2>number3)
        {
            printf("Number 2: %d is the greatest number\n", number2);
        }
        else 
        {
            printf("Number 3: %d is the greatest number\n", number3);
        }
        
    }
    return 0;
}