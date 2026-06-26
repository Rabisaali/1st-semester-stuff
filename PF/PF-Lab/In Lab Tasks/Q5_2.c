#include <stdio.h>
void reverse(int array1[], int size);
void display(int array2[3][3], int size);
int add(int array1[], int size);
int highest(int array2[][3], int size);	
int main () {
	int array1[5];
	int array2[3][3];
	printf("Enter elements of array 1:");
	int i;
	for (i=0; i<5; i++) {
		scanf("%d", &array1[i]);
	}
	printf("Enter elements of 2D array: ");
	int j;
	for (j=0; j<3; j++) {
		printf("\nEnter elements of %d row: ", j+1);
		int k;
		for (k=0; k<3; k++) {
			scanf("%d", &array2[j][k]);
		}
	}
	reverse (array1, 5); 
	display(array2, 3);
	int sum = add(array1, 5);
	printf("The sum of array 1 is %d\n", sum);
	int max = highest(array2, 3);
	printf("The maximum value in array 2 is %d\n", max);	

	return 0;
}



void reverse(int array1[], int size) {
	int i;
	for (i=size-1; i<=0; i++) {
		printf("%d ", array1[i]);
	}
	printf("\n");
	return;
}

void display(int array2[3][3], int size) {
	int i;
	for (i=0; i<size; i++) {
		int j;
		for (j=0; j<3; j++) {
			printf("%d ", array2[i][j]);
		}
		printf("\n");
	}
	return;
}

int add(int array1[], int size) {
	int sum=0; 
	int i;
	for (i=0; i<size; i++) {
		sum+=array1[i];
	}
	return sum;
}

int highest(int array2[][3], int size) {
	int max=0; 
	int i;
	for (i=0; i<size; i++) {
		int j;
		for (j=0; j<3; j++) {
			if (max<array2[i][j]) max=array2[i][j];
		}
	}
	return max;
}
