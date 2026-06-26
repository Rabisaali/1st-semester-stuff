#include <stdio.h>
#include <stdlib.h>
int* collatzSequence (int input);

int main () {
    int num;
    scanf("%d", &num);
    while (num!=-1) {
        int* arr = collatzSequence(num); 
        int i=0;
        printf("%d ", num);
        while (*(arr+i)!=1) {
            printf("%d ", *(arr+i));
            i++;
        }
        scanf("%d", &num);
    }
}

int* collatzSequence (int input) {
    int M=1;
    int* arr = (int*) malloc(M * sizeof(int));
    int i=0;

    while (input != 1) {
        if (input%2==0) {
            *(arr+i) = input/2;
            input /= 2;
        }
        else {
            *(arr+i) = (3*input) + 1;
            input = (3*input) + 1;
        }
        arr = realloc(arr, (M+1)*sizeof(int));
        i++;
        M++;
    }
    return arr;
}