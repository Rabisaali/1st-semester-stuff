#include <stdio.h>
int main () {
    int array[10];
    printf("Enter any 10 numbers: ");
    
    for (int i=0; i<10; i++) {
        scanf("%d", &array[i]);
    }
//printing the user inputed array 
printf("The array that has been inputed by user is: ");
    for (int i=0; i<10; i++) {
        printf("%d ", array[i]);
    }

    for(int i=0; i<10; i++) {
        if(i+1 == 10) {
            printf("\nThe array is in ascending order\n");
            break;
        }
        if(array[i] > array[i+1]) {
            printf("\nThe array is not in ascending order\n");
            break;
        }
    }  

    /*as far as checking is concerned.... the proogram ends here! But if the new sorted array is required then: 
    to store the sorted array nested loops are required :) otherwise, a separate function is needed for qsort()*/

    int temp;

    for (int i=0; i<10; i++) {
        for (int j=i+1; j<10; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The array in ascending order is: ");
    for(int i=0; i<10; i++) {
        printf("%d ", array[i]);
    }

}