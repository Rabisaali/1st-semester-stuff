#include <stdio.h>
int main () {
	//1D Array
	int arr[] = {10,20,30};
	int *p = &arr[0];
	printf("Address of arr[0]: %d. Value: %d\n", p, *p);
	printf("Address of arr[1]: %d. Value: %d\n", (p+1), (*p+1));
	printf("Address of arr[2]: %d. Value: %d\n", (p+2), (*p+2));
	printf(".............................................\n");
	//variable based
	int a=10;
	int * p1 = &a;
	printf("%p\n", p1);
	printf("%d\n", *p1);
	printf("%p\n", &a);
	printf(".............................................\n");
	//2D Array
	int arr2[2][3] = {{1,2,3}, {4,5,6}};
	int (*p2)[3];
	p2 = &arr2;
	printf("%p\n", p2);
	printf("Accessing elements using the pointer\n");
	printf("arr[0][0]: %d, arr[0][1]: %d, arr[0][2]: %d\n", (*p2)[0], (*p2)[1], (*p2)[2]);
	printf("arr[1][0]: %d, arr[1][1]: %d, arr[1][2]: %d\n", (*p2+1)[0], (*p2+1)[1], (*p2+1)[2]);
		
	return 0;
}
