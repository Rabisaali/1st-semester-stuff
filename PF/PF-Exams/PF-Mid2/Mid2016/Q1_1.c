#include <stdio.h>
int main () {
    int a=10,b=5;
    int * aptr=&a, *bptr=&b;
    *aptr += *bptr;
    *bptr = *aptr-*bptr;
    *aptr = *aptr-*bptr;
    printf("%d %d", a, b);



}