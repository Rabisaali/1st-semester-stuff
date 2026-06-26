#include <stdio.h>
int main () {
    int num, toggled_number;
    printf("Enter a number: "); //let num=4 -> 00000100
    scanf("%d", &num);

    int mask = 1 << 1; //00000001 -> 00000010
    toggled_number = num^mask; //after XOR toggled_number is 00000110

    // for printing the before number and its binary equivalent:
    printf("The number before toggled is %d and its binary equivalent is: ", num);
    for (int i=7; i>=0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
   // for printing the bafter toggled number and its binary equivalent:
    printf("The number after toggling is %d and its binary equivalent is: ", toggled_number);
    for (int i=7; i>=0; i--) {
        printf("%d", (toggled_number >> i) & 1);
    }
    printf("\n");
    return 0;
}