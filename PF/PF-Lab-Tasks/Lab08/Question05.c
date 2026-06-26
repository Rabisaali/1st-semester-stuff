#include <stdio.h>
int main () {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    char elementFirst = 'A';
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            printf("%c ", elementFirst);
            elementFirst++;
        }
        printf("\n");
    }
    return 0;
}