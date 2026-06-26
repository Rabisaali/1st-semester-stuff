#include <stdio.h>
int main () {
    int n1, n2, n3;
    int maximum, minimum;
    int min, min2, max, total=0;
    printf("Enetr number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    printf("Enter number 3: ");
    scanf("%d", &n3);

    if (n1>n2 && n1>n3 && n2>n3) {
        min = n3;
        min2 = n2;
        max = n1;
    }
    else if (n1>n2 && n1>n3 && n3>n2) {
        min = n2;
        min2 = n3;
        max = n1;
    }
    else if (n2>n1 && n2>n3 && n1>n3) {
        min = n3;
        min2 = n1;
        max = n2;
    }
    else if (n2>n1 && n2>n3 && n3>n1) {
        min = n1;
        min2 = n3;
        max = n2;
    }
    else if (n3>n1 && n3>n2 && n1>n2) {
        min = n2;
        min2 = n1;
        max = n3;
    }
    else if (n3>n1 && n3>n2 && n2>n1) {
        min = n1;
        min2 = n2;
        max = n3;
    }

    int num2=min+min2;

    if (num2>max) {
        maximum=num2;
        minimum=max;
    }
    else {
        maximum=max;
        minimum=num2;
    }


    do {
        if (maximum%2 == 0) {
            total += minimum;
        }
        maximum /= 2;
        minimum *= 2;
    } while (maximum >=1);
    
    printf("%d", total);
}
