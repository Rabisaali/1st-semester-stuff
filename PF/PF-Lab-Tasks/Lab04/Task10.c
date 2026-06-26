#include <stdio.h>
int main () {
    int Balance = 60000; //We can take the input from the user too by printf and scanf
    int WithdrawalAmount;
    printf("Enter the withdrawal amount: ");
    scanf("%d", &WithdrawalAmount);

    if (Balance > WithdrawalAmount && WithdrawalAmount % 500 == 0) {
        printf("You are allowed to withdraw the amount\n");
    }
    else {
        printf("Withdrawal rejected\n");
    }
    return 0;
}
