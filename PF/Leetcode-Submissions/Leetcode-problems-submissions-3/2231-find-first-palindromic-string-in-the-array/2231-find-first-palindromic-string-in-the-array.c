char* firstPalindrome(char** words, int wordsSize) {
    char s[wordsSize];
    int flag;
    int i;
    int len;
    for (i=0; i<wordsSize; i++) {
        flag=0;
        len=strlen(words[i]);
        for (int j=0; j<len/2; j++) {
            if (words[i][j]==words[i][len-1-j]) {
                flag++;
            }
            else break;
        }
        if (flag==len/2) {
            break;
        }
    }
    if (flag==len/2) return words[i];
    else return "";
}