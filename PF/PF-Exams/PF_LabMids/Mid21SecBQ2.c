#include <stdio.h>
int main () {
    int n;
    int digit;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    int i, sum;
    //while (n)
    for (i=1;i<10;i++) {
        sum=0;
        while (n!=0) {
            digit = n%10;
            sum += digit*digit;
            n/=10;
        }
        if (sum==1) {
            break;
        }
        else {
            n=sum;
        }
    } 
    printf("%d\t", i);
    printf("%d", sum);
    if (i<10 && sum==1) {
        printf("the number is an XNumber\n");
    }   
    else {
        printf("The number is not an XNumber\n");
    }
    return 0;
}