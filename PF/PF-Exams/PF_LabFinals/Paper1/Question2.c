#include <stdio.h>
int main () {
    int data[][3] = {{33, 3, 159}, {234, 122, 351}, {100, 140, 19}, {53, 310, 76}, {111, 2, 4}};
    printf("The district getting most profit is: ");
    int profit[5]; 
    for (int i=0; i<5; i++) {
        profit[i]=0;
    }
    for (int i=0; i<5; i++) {
        for (int j=0; j<3; j++) {
            profit[i] += data[i][j];
        }
    }
    int highest_profit = 0;
    int least_profit = 0;

    for (int i=1; i<5; i++) {
        if (profit[highest_profit]<profit[i]) {
            highest_profit=i;
        }
        if (profit[least_profit]>profit[i]) {
            least_profit=i;
        }
    }

    printf("district with maximum profit: %d\n", highest_profit+1);
    printf("district with least profit: %d\n", least_profit+1);    
    for (int i=0; i<5; i++) {
        printf("district %d capacity: %d\n", i+1, profit[i]);
    }

    for (int i=0; i<5; i++) {
        int branch=0;
        //int capacity[]
        for (int j=0; j<3; j++) {
            if (j==0) {
                if (300/data[i][j] > 300/data[i][branch]) branch = j;
            }
            if (j==1) {
                if (500/data[i][j] > 500/data[i][branch]) branch = j;
            }
            if (j==2) {
                if (200/data[i][j] > 200/data[i][branch]) branch = j;
            }
        }
        printf("District %d branch %d has max capacity\n", i+1, branch+1);
    }
}