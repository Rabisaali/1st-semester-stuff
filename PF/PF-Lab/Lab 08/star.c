#include <stdio.h>
int main () {
	int i;
	for (i=1; i<4; i++) {
		int j;
		for (j=4; j>i;j--) {
			printf("%d", j);
		}
		int k;
		for (k=0; k<i; k++){
			printf("* ");
		}
		printf("\n");
	}
}
