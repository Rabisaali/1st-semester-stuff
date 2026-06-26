#include <stdio.h>
#include <string.h>
char* removeWordFromString (char str[], char neww[], char word[]) {
    int* index = strstr(str, word);
    strncpy(neww, str, index-str);
    int len = strlen(word);
    strcpy(neww, str[index-str+len]);
    return neww;
}
int main () {
    char str[100], neww[100], word[100];
    printf("Enter string to remove a word from: ");
    gets(str);
    printf("\nEnter the word you want removed: ");
    gets(word);
    removeWordFromString(str, word, neww);
    printf("\nAfter word removed: %s\n", neww);
    return 0;
}