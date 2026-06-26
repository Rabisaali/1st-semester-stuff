#include <stdio.h>
int main () {
    int price, bill;
    printf("Enter the original price: ");
    scanf("%d", &price);
    bill=price;

    for (int i=1; i<=5; i++) {
        bill = bill*0.9;
        printf("%d\n", bill);
    }
    return 0;
}