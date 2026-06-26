#include <stdio.h>
int main () {
    int n = 121;//the value of number
    int temp = n;//copying the original value of number
    int n2 = 0;//initializing the other number
    while(temp>0) {
        n2 = n2+temp%10;//saving the last digit of the number provided in the new variable as its first digit
        if (temp>9)
            n2*=10;
        temp/=10;
    }
    if (n==n2) {
        printf("%d is a palindrome\n", n);
    }
    else {
        printf("%d is not a palindrome\n", n);
    }
    return 0;
}