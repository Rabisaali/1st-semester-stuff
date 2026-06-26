#include <stdio.h>
int main () {
	int userAges[10];
	printf("Enter Student Age: \n");
	int i;
	for ( i=0; i<10; i++) {
		scanf("%d", &userAges[i]);
	}
	int age=userAges[0];
	int j;
	for (j=0; i<10; j++) {
		if (userAges[i]<age) {
			age = userAges[i];
		}
	}
	printf("%d", age);
	return 0;
}
