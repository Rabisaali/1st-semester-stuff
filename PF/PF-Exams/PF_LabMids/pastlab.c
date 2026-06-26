#include <stdio.h>
int main () {
    int amount;
    int count_500=0, count_1000=0, count_100=0;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    while (amount>100) {
        if (amount%1000==0) {
            count_1000++;
            amount-=1000;
        }
        else if (amount%500==0) {
            count_500++;
            amount-=500;
        }
        else if (amount%100==0) {
            count_100++;
            amount-=100;
        }
    }
    printf("%d Rs.1000 notes, %d Rs.500 notes, and %d Rs.100 notes\n", count_1000, count_500, count_100);
    

    return 0;
}