#include <stdio.h>
int main () {
	int arr = {21, 22, 23};
	int *ptr = &arr;
	printf("%d\n", *ptr+2);
	printf("%p", ptr);
}

