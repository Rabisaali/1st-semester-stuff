#include <stdio.h>
#include <string.h>
int main () {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int k=0;
    for (int i=0; i<len-1; i++) {
        for (int j=0; j<=i; j++) {
            k%=len;
            printf("%c ", str[k]);
            k++;
        }
        printf("\n");
    }
}