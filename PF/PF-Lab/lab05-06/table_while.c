#include <stdio.h>
int main () {

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int i=1;
	while (i<=n) {
		printf("%d\tx\t%d\t=\t%d\n", n, i, n*i);
		i++;
	}
	
	return 0;
}
