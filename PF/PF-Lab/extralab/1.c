#include <stdio.h>
int main () {
    char num[8];
    int num1, num2;
    int number;
    int numb_count=0;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    number = num1&num2;
    
    for (int i=7; i>=0; i--) {
        if  ((number>>i)&1==1){
            numb_count++;
        }
    }
    printf("%d", numb_count);
    return 0;
}