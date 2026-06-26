#include <stdio.h>
#include <string.h>
char* recursiveConcat (char* dest, char* src) {
    strcat(dest, src);
    return dest;
}
int main () {
    char s1[] = "Hello, ";
    char s2[] = "World!";
    char s[strlen(s1)+strlen(s2)+1];
    recursiveConcat(s1, s2);
    printf("%s\n", s1);
}