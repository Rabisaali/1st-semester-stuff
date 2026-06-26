#include <stdio.h>
int main () {
    int n;
    char c[6];
    char s;
    int data;

    printf("To enter a number press 1.\nTo enetr a text press 2.\nTo enter a symbol press 3.\n");
    scanf("%d", &data);

    switch (data) {
        case 1:
            printf("Enter the number: ");
            scanf("%d", &n);
            int temp = n;
            int sum = 0;
            int digit;
            while (temp>0) {
                digit = temp%10;
                sum += digit*digit*digit;
                temp /= 10;
            }
            if (sum==n) {
                printf("The number is an Armstrong number!\n");
            }
            else {
                printf("the number is not an Armstrong number.\n");
            }
            break;
        case 2:
            printf("Enter the 5 character text: ");
            scanf("%s", c);
            int flag;
            for (int i=0; i<5/2; i++) {
                if (c[i] != c[5-i-1]) {
                    flag = 1;
                    break;
                }
                else {
                    flag = 0;
                }
            }
            if (flag==1) {
                printf("The text is not a palindrome.\n");
            }
            else {
                printf("The text is a plaindrome.\n");
            }
            break;
        case 3:
            printf("Enter the symbol: ");
            scanf(" %c", &s);
            for (int i=0; i<5; i++) {
                for (int j=0; j<5; j++) {
                    if (i==4 || j==4) {
                        printf("%c ", s);
                    }
                }

                printf("\n");
            }
            break;
    }
    return 0;
}