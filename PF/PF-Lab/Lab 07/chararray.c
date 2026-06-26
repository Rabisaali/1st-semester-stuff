#include <stdio.h>
int main () {
	char allCharacters[] = {'H', 'E', 'L', 'L', 'O'};
	int i=0;
	for (i=0; i<sizeof(allCharacters)/sizeof(allCharacters[0]); i++) {
		printf("%c", allCharacters[i]);
	}
}
