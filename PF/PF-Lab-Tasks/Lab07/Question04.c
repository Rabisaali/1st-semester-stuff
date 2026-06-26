#include <stdio.h>
int main () {
    int array[6];//initializing an array

    //asking for user input
    printf("Enter any 6 values:\n");
    for (int i=0; i<6; i++) {
        scanf("%d", &array[i]);
    }

    //priniting the previous array
    printf("Your previous array is: ");
    for (int i=0; i<6; i++) {
        printf("%d ", array[i]);
    }

    //storing the last element of the array in a new variable
    int temp = array[5];

    //changing the places of elements
    for (int i=5; i>=0; i--) {
        array [i+1] = array[i];
    }
    //putting the last element in the first place
    array[0] = temp;

    //printing the new array
    printf("After the changes the new array is: ");
    for (int i=0; i<6; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}