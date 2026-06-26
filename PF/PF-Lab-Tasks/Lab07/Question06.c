#include <stdio.h>
int main () {
    int array[10];
    printf("Enter 10 values of either profit and loss (for profit enter positive values; whereas, for loss enter values with a negative sign):\n");
    for (int i=0; i<10; i++) {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for (int i=0; i<10; i++) {
        if (array[i]>0) {
            sum += array[i];
        }
    }

    printf("The sum of the profit values is: %d", sum);
    return 0;
}