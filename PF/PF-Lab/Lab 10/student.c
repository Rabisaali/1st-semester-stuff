#include <stdio.h>
int main () {
	char name [3][15] = {"ali", "hamza", "aqsa"};//15 is the number of characters in the name
	int age [3] = {21, 22, 20};
	int i;
	for (i=0; i<3; i++) {
		printf("Student name is %s and age is %d\n", name[i], age[i]);
	}
	return 0;
}
