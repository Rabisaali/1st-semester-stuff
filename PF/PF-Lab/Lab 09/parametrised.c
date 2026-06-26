#include <stdio.h>

//non parametrised
void printGreetings () {
	printf("Hello User\n");
}
//parametrised
int sumOfNumbers (int a, int b) {
	return a+b;
}
int main () {
	printGreetings();
	printGreetings();
	printf("%d", sumOfNumbers(10,20));//10, 20 arguments
}


