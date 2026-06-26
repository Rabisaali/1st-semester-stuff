#include <stdio.h>
int main () {
    int gallon;
    char c;
    int bill;
    printf("Enetr your code: ");
    scanf(" %c", &c);
    printf("enetr the gallons: ");
    scanf("%d",&gallon);

    switch (c) {
        case 'H':
            bill = 500*gallon;
            printf("Your bill is %d with home use\n", bill);
            break;
        case 'C':
            if (gallon<=1000) {
                bill = gallon*1000;
            }
            else {
                int rem = gallon-1000;
                bill = 1000*1000 + 250*rem;
            }
            printf("Your bill is %d with commercial use\n", bill);
            break;
        case 'I':
            if (gallon <= 500)
                bill = gallon*1000;
            else if (gallon > 500 && gallon <= 2500)
                bill = gallon*2000;
            else if (gallon > 2500)
                bill = gallon*2500;
            printf("Your bill is %d with industrial use\n");
            break; 
        default:
            printf("Error!\n");
    }
    return 0;
}