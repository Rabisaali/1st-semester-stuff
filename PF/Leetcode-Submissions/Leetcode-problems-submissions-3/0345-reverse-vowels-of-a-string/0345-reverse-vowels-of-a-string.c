char* reverseVowels(char* s) {
    int len = strlen(s);
    int t[len];
    for (int i=0; i<len; i++) {
        t[i] = -1;
    }
    int j = 0;
    for (int i=0; i<len; i++) {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='I') {
           t[j++] = i;
        }
    }
    int count=0;
    for (int i=0; i<len; i++) {
        if (t[i] != -1)
            count++;
        else break;
    }
        int k=1;
        for (int i=0; i<count/2; i++) {
            int temp = s[t[i]];
            s[t[i]] = s[t[count-k]];
            s[t[count-k]] = temp;
            k++;
        }
    return s;
}