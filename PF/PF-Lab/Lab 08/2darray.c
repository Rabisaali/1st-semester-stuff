#include <stdio.h>
int main () {
	int studentMarks[2][4]={{21,22,23},{24,25,26}};
	//printf("%d",studentMarks[0][2]);
	int i;
	for (i=0; i<sizeof(studentMarks)/sizeof(studentMarks[0]); i++) {
		int j;
		for (j=0; j<sizeof(studentMarks[i])/sizeof(studentMarks[i][0]); j++) {
			printf("%d ", studentMarks[i][j]);
		}
		printf("\n");
	}	
}
