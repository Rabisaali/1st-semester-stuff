#include <stdio.h>
#include <string.h>
int main () {
	char userDbName[20] = "admin";
	char userDbPassword[20] = "1234";
	int loggedIn = 0;
	char userName[10];
	char userPassword[20];
	do {
		printf("Enter Your Name: ");
		scanf("%s", userName);
		printf("Enter Your Password: ");
		scanf("%s", userPassword);
		if(strcmp(userDbName, userName) == 0 && strcmp(userDbPassword, userPassword) == 0) {
			printf("Login Successfull\n");
			loggedIn = 1;
		}
		else 
			printf("Invalid Credentials! please enter again\n");
	}
	while (!loggedIn);
	
	return 0;
}
