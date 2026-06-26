#include <stdio.h>
#include <string.h>
int main () {
	char wordSearch[3][3] = {
	{'c', 'a', 't'}, 
	{'n', 'a', 'm'}, 
	{'b', 'k', 'l'}};
	char word[3];
	printf("enter the word of three letters: ");
	scanf("%s", word);
	char firstrow[3];
	int i;
	for (i=0; i<3; i++) {
		firstrow[i] = wordSearch[0][i];
	}
	if (strcmp(word, firstrow)==0) {
		printf("word found\n");
	}
	else{
		printf("word not found\n");
	}
	int count =0;
	char character;
	printf("Enter the character: ");
	scanf(" %c", &character);
	int j;
	for (j=0; j<3; j++) {
		int k;
		for (k=0; k<3; k++) {
			if (wordSearch[i][j] == character) count++;
		}
	}
	printf("The character %c appears %d times", character, count);
	return 0;	
}
