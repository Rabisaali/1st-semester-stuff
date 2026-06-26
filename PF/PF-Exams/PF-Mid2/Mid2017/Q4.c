#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main () {
    char string[100];
    scanf("%[ A-Za-z]", string);
    int len = strlen(string);
    for (int i=0; i<len; i++) {
        if (i==0) string[i] = toupper(string[i]);
        else if (string[i-1] == ' ') string[i] = toupper(string[i]);
        else if (string[i+1] == ' ') string[i] = toupper(string[i]);
        else if (i==len-1) string[i] = toupper(string[i]);
    }
    printf("%s", string);

}