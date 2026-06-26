#include <stdio.h>
int fact (int num);
int main () {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int ans = fact(n);
	printf("the factorial of this number is %d\n", ans);
}
int fact (int num) {
	if (num == 1) return 1;
	else {
		int answer = num * fact(num-1);
		return answer;
	}
}
