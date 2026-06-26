#include <stdio.h>
int compact (char* s) {
    int space = 0;
    int read=0, write=0;
    int removed=0;

    while (s[read]!='\0') {

        if ((s[read]==' ') && (space==0)) {
            s[write++] = s[read];
            space = 1;
        }
        else if ((s[read]==' ') && (space==1)) {
            removed++;
        }
        else {
            s[write++] = s[read];
            space=0;
        }
        read++;
    }
    s[write]='\0';
    printf("%s", s);
    return removed;
}
int main () {
    char str[] = "Exam             is        so       easy    !";
    int removed = compact(str);
    printf("\n%d\n", removed);
}