# include <stdio.h>
int main () {
	int marks[10];
	printf("Enter the marks of 10 subjects:\n");
	
	int i;
	for (i=0; i<10; i++) {
		scanf("%d", &marks[i]);
	}
	int sum=0;
	for (i=0; i<10; i++) {
		sum += marks[i];	
	}
	
	float avg=sum/10.0;
	printf("The average is %f\n", avg);
	return 0;
}
