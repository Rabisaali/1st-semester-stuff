#include <stdio.h>
main () {
	FILE *fptr;
	char userData[500];
	fptr = fopen("name.txt", "r");
	if(fptr == NULL) {
		printf("Error\n");
		return 1;
	}
	while (fgets(userData, 500, fptr) != NULL) {
		printf("%s", userData);
	}
	fclose(fptr);
}
