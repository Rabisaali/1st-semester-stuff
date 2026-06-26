#include <stdio.h>
int main () {
	int balance=1000;
	int withdraw;
	printf("Enter amount: ");
	scanf("%d", &withdraw);
	
	while (withdraw>balance) {
		printf("Insufficient balance! Try again\n");
		scanf("%d", &withdraw);
	}
	balance -= withdraw;
	printf("Transaction successfull! Your remaining balance is %d", balance);
	
	return 0;
}
