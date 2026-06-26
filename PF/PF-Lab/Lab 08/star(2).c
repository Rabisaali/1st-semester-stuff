#include <stdio.h>
int main () {
	int i;
	int spaces=3;
	for (i=1; i<=3; i++) {
		int j;
		for (j=1; j<=spaces;j++) {
			printf(" ");
			spaces--;
		}
		int k;
		for (k=1; k<=i; k++){
			printf("*");
		}
		printf("\n");
	}
}
