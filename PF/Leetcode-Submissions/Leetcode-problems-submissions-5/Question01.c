#include <stdio.h>
#include <stdlib.h>

int main() {
    int **arr = (int**) malloc(10 * sizeof(int*)); // array of 10 row pointers
    int *cols = (int*) malloc(10 * sizeof(int));   // store number of columns for each row

    if (arr == NULL || cols == NULL) {
        printf("Memory allocation failed for row pointers or cols array.\n");
        return 1;
    }

    // Allocate each row separately
    for (int i = 0; i < 10; i++) {
        printf("Enter number of columns for row %d: ", i + 1);
        scanf("%d", &cols[i]);

        arr[i] = (int *)malloc(cols[i] * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed for row %d\n", i + 1);
            // free previously allocated rows
            for (int j = 0; j < i; j++) free(arr[j]);
            free(arr);
            free(cols);
            return 1;
        }

        // Fill row with its index (starting from 1)
        for (int j = 0; j < cols[i]; j++) {
            arr[i][j] = i + 1;
        }
    }

    // Print the 2D array
    printf("\nFinal 2D Array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Row %d -> ", i + 1);
        for (int j = 0; j < cols[i]; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < 10; i++) {
        free(arr[i]);   // free each row
    }
    free(arr);          // free the array of row pointers
    free(cols);         // free the column sizes array

    printf("\nMemory freed. Program ending.\n");
    return 0;
}