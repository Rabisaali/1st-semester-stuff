#include <stdio.h>
int main ()
{
    int salary;
    int age;
    printf("Enter your salary: ");
    scanf("%d", &salary);
    printf("Enter you age: ");
    scanf("%d", &age);

    if (salary >= 40000 && age >= 25)
    {
        printf("The loan has been approved\n");
    }
    else
    {
        printf("The loan has been rejected\n");
    }
    return 0;
}