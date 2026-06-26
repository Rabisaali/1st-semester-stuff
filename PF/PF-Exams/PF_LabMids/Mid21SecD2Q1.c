#include <stdio.h>
int main () {
    int roll_no;
    printf("Enetr your roll number: ");
    scanf("%d", &roll_no);

    int first = roll_no/100;
    printf("First two: %d\n", first);
    int last = roll_no%100;
    printf("Last two: %d\n", last);
    
    for (int i=1; i<=roll_no; i++) {
        if (roll_no%i == 0) {
            printf("The number is not prime\n");
            return 0;
        }
    }
    printf("The number is prime\n");
return 0;
}