#include <stdio.h>

int main() {
    int required;
    printf("How many sheets do you need? ");
    scanf("%d", &required);

    // Prices:
    float price_single = 0.10f;
    float price_100    = 0.055f;  // per sheet in multiples of 100
    float price_500    = 0.04f;   // per sheet in multiples of 500

    // Option 1: Buy exactly the required number as single sheets
    float cost_single = required * price_single;

    // Option 2: Rounding up to the nearest hundred
    int packs100 = (required + 99) / 100; // ceiling
    int sheets100 = packs100 * 100;
    float cost_100 = sheets100 * price_100;

    // Option 3: Rounding up to the nearest 500
    int packs500 = (required + 499) / 500; // ceiling
    int sheets500 = packs500 * 500;
    float cost_500 = sheets500 * price_500;

    // Determine minimum cost
    float minCost = cost_single;
    int bestSheets = required;

    if (cost_100 < minCost) {
        minCost = cost_100;
        bestSheets = sheets100;
    }
    if (cost_500 < minCost) {
        minCost = cost_500;
        bestSheets = sheets500;
    }

    // Output
    printf("Your total cost is $%.2f\n", minCost);
    printf("You should buy %d sheets for the minimum price.\n", bestSheets);

    return 0;
}
