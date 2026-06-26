#include <stdio.h>
int main () {
    int M;
    printf("Enetr length: ");
    scanf("%d", &M);
    int A[M];
    printf("Enter elements of array: ");
    for (int k=0; k<M; k++) {
        scanf("%d", &A[k]);
    }
        int j,i,key;
        for (j=2; j<=M; j++) {
            key=A[j];
            i=j-1;
            while (i>=0 && A[i]>key) {
                A[i+1] = A[i];
                i = i-1;
            }
            A[i+1] = key;
        }
    printf("\n");
    for (int k=0; k<M; k++) {
        printf("%d   ", A[k]);
    }
}