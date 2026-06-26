#include <stdio.h>
int main () {
    int n;
    printf("Enter the size of array(s): ");
    scanf("%d", &n);
    int array1[n];
    int array2[n];
    printf("Enter the elements of first array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &array1[i]);
    }
    printf("Enter the elements of second array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &array2[i]);
    }
    printf("Number of common elements are: ");

    int count=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (array1[i]==array2[j]) {
                count++;
            }
        }
    }
    printf("%d ", count);
    return 0;
}