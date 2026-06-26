#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char word1[50];
    scanf("%s", word1);
    int len = strlen(word1);
    //len--;
    if (word1[0] == 'a'||word1[0] == 'e'||word1[0] == 'i'||word1[0] == 'o'||word1[0] == 'u') {
        char word2[len+4];
        strncpy(word2, word1, len+1);
        strcat(word2, "way");
        printf("%s", word2);
    }
    else if (strncmp(word1, "sch", 3)==0) {
        int j=0;
        char word2[len+5];
        for (int i=3; i<len; i++) {
            word2[j] = word1[i];
            j++;
        }
        strcat(word2, "skway");
        printf("%s", word2);
    }
    else {
        int j=0;
        char* temp = (char*) malloc(len*sizeof(char));
        while (word1[j] != 'a'&&word1[j] != 'e'&&word1[j] != 'i'&&word1[j] != 'o'&&word1[j] != 'u') {
            *(temp+j)=word1[j];
            j++;
        }
        temp[j]='\0';
        char word2[len+3];
        int k=0;
        for (int i=j; i<len; i++, k++) {
            word2[k]=word1[i];   
        }
        word2[k]='\0';
        strcat(word2, temp);
        strcat(word2, "ay");
        printf("%s", word2);
    }
    
}