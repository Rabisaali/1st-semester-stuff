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
    printf("Intersection: ");

    int Intersection[2*n];
    int element=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            int flag=0;
            if (array1[i]==array2[j]) {
                for (int k=0; k<2*n; k++) {
                    if (Intersection[k] == array1[i]) {
                        flag++;
                        break;
                    }
                }
                if(flag==0) {
                    Intersection[element++] = array1[i];
                }
            }
        }
    }
    
    for(int i=0; i<element; i++) {
        printf("%d ", Intersection[i]);
    }

    return 0;
}