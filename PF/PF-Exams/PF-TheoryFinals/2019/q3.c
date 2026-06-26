#include <stdio.h>
#include <string.h>
int main () {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int half = len/2;
    int space = len-1;
    for (int i=0; i<len; i++) {
        for (int j=space; j>0; j--) {
            printf(" ");
        }
        space--;
        for(int k=0; k<=i; k++) {
            printf("%c ", str[k]);
        }
        printf("\n");
    }
}