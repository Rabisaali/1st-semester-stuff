#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if (age<12)
    {
        printf("The ticket price is $200\n");
    }
    else 
    {
        if(age>=12 && age<18)
        {
            printf("The ticket price is $300\n");
        }
        else if (age>=18 && age<=60)
        {
            printf("The ticket price is $500\n");
        }
        else
        {
            printf("The ticket price is $250\n");
        }
    }
    return 0;
}