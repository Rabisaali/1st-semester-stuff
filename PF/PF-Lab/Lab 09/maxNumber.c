#include <stdio.h> 

int maxNumber(int a, int b) {
	if (a>b)
		return a;
	else
		return b;
}
int main () {
	printf("%d", maxNumber(20,50));
}
