#include <stdio.h>

float calculateInterest (int amount, float rate, float time) {
	float Interest = (amount*rate*time)/100;
	return Interest;
}

int updateBalance (int amount, float interest) {
	float totalAmount = interest+amount;
	return totalAmount;
}

int main () {
	int principal;
	float rate, time;
	printf("Enter principal amount: ");
	scanf("%d", &principal);
	printf("Enter the rate(in percentage): ");
	scanf("%f", &rate);
	printf("Enter time: ");
	scanf("%f", &time);
	float interest = calculateInterest(principal, rate, time);
	printf("Your interest is %f\n", interest);
	int balance;
	printf("Enter your current balance: ");
	scanf("%d", &balance);
	float updatedbalance = updateBalance(balance, interest);
	printf("Your updated balance is %f\n", updatedbalance);
}
