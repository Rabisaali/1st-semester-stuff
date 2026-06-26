#include <stdio.h>
int main () {
    int count0, count1, count2, count3, count4, count5, count6, count7, count8, count9;
    count0 = count1 = count2 = count3 = count4 = count5 = count6 = count7 = count8 = count9 = 0;
    int n;
    
    do {
        printf("Enter a number from 0 to 9\n");
        scanf("%d", &n);
        if (n==0) {
            count0 ++;    
        }
        else if (n==1) {
            count1++;
        }
        else if (n==2) {
            count2++;
        }
        else if (n==3) {
            count3++;
        }
        else if (n==4) {
            count4++;
        }
        else if (n==5) {
            count5++;
        }
        else if (n==6) {
            count6++;
        }
        else if (n==7) {
            count7++;
        }
        else if (n==8) {
            count8++;
        }
        else if (n==9) {
            count9++;
        }
        else {
            break;
        }
    } while (n>=0 && n<=9);

    printf("Number       Number of Occurrences\n");
    for (n=0; n<=9; n++)
    {
        if (n == 0 && count0 != 0) {
            printf("%d\t\t%d\n", n, count0);
        }
        else if (n == 1 && count1 != 0) {
            printf("%d\t\t%d\n", n, count1);
        }
        else if (n == 2 && count2 != 0) {
            printf("%d\t\t%d\n", n, count2);
        }
        else if (n == 3 && count3 != 0) {
            printf("%d\t\t%d\n", n, count3);
        }
        else if (n == 4 && count4 != 0) {
            printf("%d\t\t%d\n", n, count4);
        }
        else if (n == 5 && count5 != 0) {
            printf("%d\t\t%d\n", n, count5);
        }
        else if (n == 6 && count6 != 0) {
            printf("%d\t\t%d\n", n, count6);
        }
        else if (n == 7 && count7 != 0) {
            printf("%d\t\t%d\n", n, count7);
        }
        else if (n == 8 && count8 != 0) {
            printf("%d\t\t%d\n", n, count8);
        }
        else if (n == 9 && count9 != 0) {
            printf("%d\t\t%d\n", n, count9);
        }
    }
    return 0;
}