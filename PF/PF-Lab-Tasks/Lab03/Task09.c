#include <stdio.h>
int main ()
{
    char Name[20];
    int Age;
    printf("Enter your first name only: ");
    scanf("%s", Name);
    printf("Enter your age: ");
    scanf("%d", &Age);

    printf("The name provided is %s and the age is %d\n", Name, Age);
    return 0;
}