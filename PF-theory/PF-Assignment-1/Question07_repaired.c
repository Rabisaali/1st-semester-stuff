#include <stdio.h>
int main()
{
    int value;
    printf("Please enter a value in the range 1...7:");
    scanf("%d", &value);
    //Translate number into its English word
    if (value == 1)
    {
        printf("You entered a one\n");
        printf("It's Monday\n");
    }
    else if (value == 2)
    {
        printf("You entered a two\n");
        printf("It's Tuesday\n");
    }
    else if (value == 3)
    {
        printf("You entered a three\n");
        printf("It's Wednesday\n");
    }
    else if (value == 4)
    {
        printf("You entered a four\n");
        printf("It's Thursday\n");
    }
    else if (value == 5)
    {
        printf("You entered a five\n");
        printf("It's Friday\n");
    }
    else if (value == 6)
    {
        printf("You entered a six\n");
        printf("It's Saturday\n");
    }
    else if (value == 7)
    {
        printf("You entered a seven\n");
        printf("It's Sunday\n");
    }
    else
    {
       printf("You entered a value out of range\n");
    }
    return 0;
}