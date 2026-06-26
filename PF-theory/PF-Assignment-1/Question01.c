#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main () {
    int FixedDailyAmount = 50000;
    char OriginCountry[] = "Pakistan";
    int NumberOfTransactions = 0;
    int Amount;
    char Country[56];
    int Sum = 0;
    char Response[4];

yes: 
    NumberOfTransactions ++;
    if (NumberOfTransactions > 3) 
    {
        printf("SUSPICIOUS ACTIVITY NOTED\n\a");
        exit(1);
    }

    printf("Please specify the country where the transaction is taking place: ");
    scanf("%s", Country);
    if (strcasecmp(Country, OriginCountry) != 0)
    {
        printf("SUSPICIOUS ACTIVITY NOTED\n\a");
        exit(1);
    }

    printf("How much money would you like to withdraw? ");
    scanf("%d", &Amount);
    Sum += Amount;
    if (Sum > 50000)
    {
        printf("SUSPICIOUS ACTIVITY NOTED\n\a");
        exit(1);
    }

    printf ("Do you want to withdraw more money? ");
    scanf("%s", Response);

    if (strcasecmp(Response, "Yes") == 0)
    {
        goto yes;
    }

    return 0;
}