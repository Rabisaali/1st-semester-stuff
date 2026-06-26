#include <stdio.h>
#include <stdlib.h>
int main () {
    int N;
    scanf("%d", &N);
    int M=0;
    int** mat=NULL;
    while (1) {
        int* row = (int *) malloc(N*sizeof(int));
        int x;

        if (scanf("%d", &x)!=1) break;
        if (x==-1) {
            free(row);
            break;
        }
        row[0]=x;
        for (int i=1; i<N; i++) {
            scanf("%d", &row[i]);
        }
        mat = (int**)realloc(mat, (M+1)*sizeof(int*));
        mat[M]=row;
        M++;
    }
    int R=M-2;
    int C=N-2;
    printf("%d %d\n", R, C);
    int** res=(int **)malloc(R*sizeof(int*));
    for (int i=0; i<R; i++) {
        res[i] = (int*) malloc(C*sizeof(int));
    }

    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            int sum=0;
            for (int a=i; a<i+3; a++) {
                for (int b=j; b<j+3; b++) {
                    sum+=mat[a][b];
                }
            }
            res[i][j]=sum;
        }
    }

    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

}