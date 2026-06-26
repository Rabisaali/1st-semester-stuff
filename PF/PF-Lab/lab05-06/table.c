#include <stdio.h>
int main (void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
	int i;
    for (i=1; i<=n; i++) {
        printf("%d\tx\t%d\t=\t%d\n", n, i, n*i );
    }
    return 0;
}
