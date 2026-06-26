#include <stdio.h>
#include <string.h>>
int main () {
	char string[100];
	scanf("%[ A-Za-z]", string);
	int len = strlen(string);

	int i;
	for (i=0; i<len; i++) {
		if (i==0) printf("%c", string[0]);
		else if (string[i-1]==' ') printf("%c", string[i]);
	}
}
