#include <stdio.h>
#include <string.h>
int main () {
	char name [] = "kinza";
	char lastName[] = "khan";
	printf("%s length is %d\n", name, strlen(name));
	printf("%s\n", strcat(name,lastName));
	printf("%s\n", strncat(name,lastName, 3));	
	
}
