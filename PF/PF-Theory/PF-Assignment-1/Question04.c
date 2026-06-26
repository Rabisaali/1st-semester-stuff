#include <stdio.h>
int main () {
    int card1, card2, card3, card4, card5;
    printf("Enter the integral representation of your first card: ");
    scanf("%d", &card1);
    printf("Enter the integral representation of your second card: ");
    scanf("%d", &card2);
    printf("Enter the integral representation of your third card: ");
    scanf("%d", &card3);
    printf("Enter the integral representation of your fourth card: ");
    scanf("%d", &card4);
    printf("Enter the integral representation of your fifth card: ");
    scanf("%d", &card5);

    //not entertaining the logic of five of kind because it is impossible in a normal deck of card

    if (card1 == card2 == card3 && card4 == card5) {
        printf("This poker hand is a full house.\n");
    }
    else if (card2 == card3 == card4 && card1 == card5) {
        printf("This poker hand is a full house.\n");
    }
    else if (card3 == card4 == card5 && card1 == card2) {
        printf("This poker hand is a full house.\n");
    }
    else if (card1 == card2 == card4 && card3 == card5) {
        printf("This poker hand is a full house.\n");
    }
    else if (card1 == card2 == card5 && card3 == card4) {
        printf("This poker hand is a full house.\n");
    }
    else if (card2 == card3 == card5 && card1 == card4) {
        printf("This poker hand is a full house.\n");
    }
    else if (card1 == card3 == card4 && card2 == card5) {
        printf("This poker hand is a full house.\n");
    }
    else if (card1 == card3 == card5 && card2 == card4) {
        printf("This poker hand is a full house.\n");
    }
    else if (card1 == card4 == card5 && card2 == card3) {
        printf("This poker hand is a full house.\n");
    }
    else if (card2 == card4 == card5 && card1 == card3) {
        printf("This poker hand is a full house.\n");
    }
    else {
        printf("This is not a full house.\n");
    }
}
