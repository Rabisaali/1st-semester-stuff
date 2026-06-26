#include <stdio.h>
int main () {
    int n;
    printf("Enter a number: ");//if the number entered is 5... it's binary equivalent in 8 bit format is 00000101
    scanf("%d", &n);

    //performing left shift by 1.... so the resultant binary form is 00001010 which equates to 10
    n = n<<1;
    printf("left shift by 1 is %d\n", n); 

    //performing right shift by 2... so the resultant binary form is 00000010 which equates to 2
    n = n>>2;
    printf("right shift by 2 is %d\n", n);

    return 0;
}