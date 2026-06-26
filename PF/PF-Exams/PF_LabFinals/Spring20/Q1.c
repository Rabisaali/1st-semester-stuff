#include <stdio.h>
#include <stdlib.h>

int* Union (int* arr1, int* arr2, int size1, int size2, int* k);

int main () {
    int size1, size2;
    scanf("%d %d", &size1, &size2);
    int arr1[size1];
    int arr2[size2];
    for (int i=0; i<size1; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i=0; i<size2; i++) {
        scanf("%d", &arr2[i]);
    }
    int k;
    int* Result = Union (arr1, arr2, size1, size2, &k);
    for (int i=0 ; i<k; i++) {
        printf("%d ", *(Result+i));
    }
}

int* Union (int* arr1, int* arr2, int size1, int size2, int* k) {
    int* result = (int*) malloc ((size1+size2)*sizeof(int));
    int i=0, j=0;
    (*k)=0;
    while (i<size1 && j<size2) {
        if (arr1[i]<arr2[j]) {
            result[(*k)++] = arr1[i++];
        }
        else if (arr2[j]<arr1[i]) {
            result[(*k)++] = arr2[j++];
        }
        else if (arr1[i]==arr2[j]) {
            result[(*k)++] = arr1[i++];
            j++;
        }
    }
    while (i<size1) result[(*k)++] = arr1[i++];
    while (j<size2) result[(*k)++] = arr2[j++];
    return result;
}