#include <stdio.h>
int main () {
	int studentAge[] = {21,22,19,18};//initialization of array
	//printf("%d", studentAge[0]);
	//printf("%d", sizeof(studentAge)/sizeof(studentAge[0]));
	int i;
	/*for (i=0; i<4; i++) {
		printf("%d\n", studentAge[i]);
	}*/
	
	for (i=0; i<sizeof(studentAge)/sizeof(studentAge[0]); i++) {
		printf("%d\n", studentAge[i]);
	}
}
