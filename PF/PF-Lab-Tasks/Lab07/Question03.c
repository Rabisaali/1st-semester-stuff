#include <stdio.h>
int main () {
	int userAges[8];
	printf("Enter Participants Age: \n");
	int i;
	for (i=0; i<8; i++) {
		scanf("%d", &userAges[i]);
	}
	int age=userAges[0];
	for (i=0; i<8; i++) {
		if (userAges[i]<age) {
			age = userAges[i];
		}
	}
	printf("Age of the youngest participant is: %d\n", age);
}
