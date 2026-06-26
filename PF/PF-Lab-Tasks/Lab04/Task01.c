#include <stdio.h>
int main ()
{
    int BillAmount;
    printf("Enter the bill amount: ");
    scanf("%d", &BillAmount);

    if (BillAmount>5000)
    {
        BillAmount = 0.1 * BillAmount;
        printf("After 10%% discount your new bill is %d\n", BillAmount);
    }
    else
    {
        printf("Your bill amount is %d", BillAmount);
    }
    return 0;
}