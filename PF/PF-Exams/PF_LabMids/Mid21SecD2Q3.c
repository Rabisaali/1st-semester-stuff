#include <stdio.h>
int main () {
    printf("Welcome to DECS Annual Tour.\nTicket price is 30000/ person\n");
    int n, bill=0;
    int count_25 = 0, count_24 = 0, count_23 = 0, count_22 =0;
    do {
        printf("Enter your batch year or -1 to exit: ");
        scanf("%d", &n);
        if (n==-1) {
            break;
        }
        else {
            switch (n) {
                case 25:
                    bill += 30000*0.9;
                    count_25++;
                    break;
                case 24:
                    bill += 30000*0.85;
                    count_24++;
                    break;
                case 23:
                    bill += 30000*0.8;
                    count_23++;
                    break;
                case 22:
                    bill += 30000*0.75;
                    count_22++;
                    break;
                default: 
                    printf("Invalid batch\n");
            }
        }
    } while (n!=-1);

    printf("You bought %d ticket of batch year 25, %d tickets of 24, %d tickets of 23, and %d tickets of 22\n", count_25, count_24, count_23, count_22);
    printf("your total bill is %d", bill);
    return 0;
}