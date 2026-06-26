#include <stdio.h>
int main () {
	int userAges[5];
	printf("Enter Student Age: \n");
	int i;
	for (i=0; i<5; i++) {
		scanf("%d", &userAges[i]);
	}
	int age=userAges[0];
	for (i=0; i<5; i++) {
		if (userAges[i]<age) {
			age = userAges[i];
		}
	}
	printf("age of the youngest student is: %d\n", age);
	
	int k;
	for (k=4; k>=0; k--) {
		printf("%d\n", userAges[k]);
	}
	return 0;
}
