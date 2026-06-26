#include <stdio.h>
int main () {
    int Temperature;
    printf("Enter the temperature today: ");
    scanf("%d", &Temperature);

    if (Temperature >= 30) {
        printf("Hot Day\n");
    }
    else {
        printf("Pleasant Day\n");
    }
    return 0;
}