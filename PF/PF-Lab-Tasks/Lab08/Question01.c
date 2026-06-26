#include <stdio.h>
int main () {
    int n;
    printf("Enter the size of array(s): ");
    scanf("%d", &n);

    int array1[n], array2[n];
    printf("Enter the elements of array 1: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the elements of array 2: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &array2[i]);
    }

    printf("Union: ");

    int element=0;
    
    int UnionArray[2*n];
    for (int i=0; i<n; i++) {
        int j;
        for (j=0; j<element; j++) {
            if (UnionArray[j] == array1[i]){
                break;
            }
        }
        if (j==element) {
            UnionArray[element++] = array1[i];
        }
    }
    for (int i=0; i<n; i++) {
        int j;
        for (j=0; j<element; j++) {
            if (UnionArray[j] == array2[i]) {
                break;
            }
        }
        if (j==element) {
            UnionArray[element++] = array2[i];
        }
    }

    for (int i=0; i<element; i++) {
        printf("%d ", UnionArray[i]);
    }
}