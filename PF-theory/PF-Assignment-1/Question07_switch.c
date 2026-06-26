#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a number in the range of 1-7: ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("You entered %d\nIt's Monday\n", n);
            break;
        case 2: 
            printf("You entered %d\nIt's Tuesday\n", n);
            break;
        case 3:
            printf("You entered %d\nIt's Wednesday\n", n);
            break;
        case 4:
            printf("You entered %d\nIt's Thursday\n", n);
            break;
        case 5:
            printf("You entered %d\nIt's Friday\n", n);
            break;
        case 6:
            printf("You entered %d\nIt's Saturday\n", n);
            break;
        case 7:
            printf("You entered %d\nIt's Sunday\n", n);
            break;
        default:
            printf("You entered a number that is out of range\n");
    }
    return 0;
}