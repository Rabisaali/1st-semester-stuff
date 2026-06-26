#include <stdio.h>
int main () {
    float a;
    float b;
    char operator;
    float operation;

    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);

    while (getchar() != '\n'); 

    printf("Enter the operation that you would like to perform on the two numbers i.e + - / * : ");
    scanf("%c", &operator);

    switch (operator) {
        case '+':
           printf("%f", a+b);
           break;
        case '-':
           printf("%f", a-b);
           break;
        case '*': 
           printf("%f", a*b);
           break;    
        case '/':
           printf("%f", a/b);
           break;
        default:
           printf("Kindly enter a valid operator\n");
    }

    return 0;
}