#include <stdio.h>
#include <stdlib.h>
int** input (int** row, int a, int b) {
    for (int i=0; i<4; i++) {
        printf("Enter data for %d route: ", i);
        for (int j=0; j<5; j++) {
            scanf("%d", &row[i][j]);
        }
    }
    return row;
}
void display(int** arr, int a, int b) {
    for (int i=0; i<4; i++) {
        printf("Route: %d: ", i+1);
        for (int j=0; j<5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void passMon (int** arr, int a, int b) {
    int sum=0;
    for (int i=0; i<4; i++) {
        sum+=arr[i][0];
    }
    printf("Number of passengers on Monday: %d\n", sum);
}
void totalPass (int** arr, int a, int b) {
    int sum=0;
    for (int j=0; j<5; j++) {
        sum+=arr[0][j];
    }
    printf("Total passengers on route 0: %d\n", sum);
}
void maxRow (int** arr, int a, int b) {
    int max = arr[3][0];
    for (int i=1; i<5; i++) {
        if (max<arr[3][i]) max = arr[3][i];
    }
    printf("Max passengers for the route 3: %d\n", max);
}
void MinPass (int** arr, int a, int b) {
    int min = arr[0][3];
    for (int i=0; i<4; i++) {
        if (min > arr[i][3]) min = arr[i][3];
    }
    printf("Max passengers on Thursday: %d\n", min);
}
void Avg (int** arr, int a, int b) {
    float route[4];
    float days[5];
    for (int i=0; i<4; i++) {
        for (int j=0; j<5; j++) {
            route[i]+=arr[i][j];
        }
        printf("Average of route %d: %f\n", i, route[i]/5.0);
    }
    for (int i=0; i<4; i++) {
        for (int j=0; j<5; j++) {
            days[j]+=arr[i][j];
        }
    }
    for (int i=0; i<5; i++) {
        printf("Average of day %d: %f\n", i+1, days[i]/4);
    }
}
void Highest(int** arr, int a, int b) {
    int sum[] = {0, 0, 0, 0};
    for (int i=0; i<4; i++) {
        for (int j=0; j<5; j++) {
            sum[i] += arr[i][j];
        }
    }
    int max = sum[0];
    int maxi=0;
    for (int i=0; i<4; i++) {
        if (max<sum[i]) {
            max=sum[i];
            maxi=i;
        }
    }
    printf("Max passengers: %d, index: %d\n", max, maxi);
}
int main () {
    int ** row = (int** )malloc(4*sizeof(int *));
    for (int i=0; i<4; i++) {
        int* col = (int*) malloc(5*sizeof(int));
        row[i]=col;
    }
    int** arr = input(row, 4, 5);
    display(arr, 4, 5);
    passMon(arr, 4, 5);
    totalPass(arr, 4, 5);
    maxRow(arr, 4, 5);
    MinPass(arr, 4, 5);
    Avg(arr, 4, 5);
    Highest(arr, 4, 5);
}
