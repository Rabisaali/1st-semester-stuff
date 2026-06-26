#include <stdio.h>
int main () {
	int employeeID[12];
	printf("Enter 12 Employee IDs:\n");
	
	int i;
	for (i=0; i<12; i++) {
		scanf("%d", &employeeID[i]);
	}
	
	int ID;
	printf("Enter the employee ID: ");
	scanf("%d", &ID);
	
	for (i=0; i<12; i++) {
		if (ID == employeeID[i]) {
			printf("Employee ID found!");
			return;
		}
	}
	printf("Employe ID not found!");
	return 0;
}
