#include <stdio.h> 
#include <string.h>
int main () {
	char filename[50];
	char name[50];
	printf("Enter the filename: ");
	scanf("%s", filename);
	//int len = strlen(filename);
	FILE *fptr;
	fptr = fopen(filename,"w");
	if (fptr==NULL) {
		printf("error to open the file\n");
		return 1;
	}
	
	fprintf(fptr, "this file was created by the program\n");
	printf("Enter your full name: ");
	while (getchar() != '\n');
	fgets(name, sizeof(name), stdin);
	fputs(name, fptr);
	
	fclose(fptr);
	return 0;
}
