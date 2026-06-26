#include <stdio.h> 
int main () {
	char charWord [] = "hello";
	int i;
	int count = 0;
	for (i=0; i<5; i++) {
		if (charWord[i] == 'l') {
			count ++;
		}
	}
	printf("%d", count);
}
