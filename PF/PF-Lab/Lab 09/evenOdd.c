#include <stdio.h> 
#include <stdbool.h>
bool evenNumber(int a) {
	if (a%2 == 0)
		return 1;
	else
		return 0;
}
int main () {
	if (evenNumber(12) == 1) {
		printf("The number is even\n");
	}
	else
	{
		printf("The number is odd\n");
	}

}
