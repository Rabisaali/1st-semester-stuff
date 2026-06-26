#include <stdio.h>
int main () {
    int n=5;
    int arr[5][5];
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            if (i+1 == 5) break;
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++){
            printf("%d ", arr[i][j]);
        }   
        printf("\n");
    }
}