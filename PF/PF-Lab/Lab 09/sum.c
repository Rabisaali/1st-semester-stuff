#include <stdio.h> 
int sum (int data[], int size) {
	int sum=0;
	int i;
	for (i=0; i<size; i++) {
		sum+=data[i];
	}
	return sum;
}

int main () {
	
	int number[5];
	int i;
	for (i=0; i<5; i++) {
		printf("Enter number : %d ", i+1);
		scanf("%d", &number[i]);
	}
	printf("%d", sum(number, 5));
}
