#include <stdio.h>
int main () {
    int array[12];
    printf("Enter any 12 numbers: ");
    for (int i=0; i<12; i++) {
        scanf("%d", &array[i]);
    }
    int number;
    printf("Enter the number that you want to remove: ");
    scanf("%d", &number);

    int j=0;//for removing the element and storing the remaining elements 
    for (int i=0; i<12; i++) {
        if(array[i] != number) {
            array[j] = array[i];
            j++;
        }
    }

    printf("The new array is: ");
    for (int i=0; i<j; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}