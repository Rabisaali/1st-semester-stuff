#include <stdio.h> 
int sum (int data[], int size) {
	int sum=0;
	int i;
	for (i=0; i<size; i++) {
		sum+=data[i];
	}
	return sum;
}

float discount (float total) {
	if (total > 5000) {
		total *= 0.9;
	}
	return total;
}

float printBill (float total) {
	printf("Your total bill is %f", total);
}
int main () {
	int size;
	printf("Enter the number of items in the cart: ");
	scanf("%d", &size);
	int item[size];
	int i;
	for (i=0; i<5; i++) {
		printf("Enter price of item number %d: ", i+1);
		scanf("%d", &item[i]);
	}
	float total = sum(item, size);
	float newBill = discount(total);
	printBill(newBill);
}
