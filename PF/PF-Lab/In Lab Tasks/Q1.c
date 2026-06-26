#include <stdio.h>
#include <string.h>
int main () {
	char password[50];
	char username[50];
	printf("Enter username: ");
	scanf("%s", username);
	int usernameLength = strlen(username);
	printf("Enter password: ");
	scanf("%s", password);
	int passwordLength = strlen(password);
	if (passwordLength>=8) {
		int count = 0;
		int i;
		for (i=0; i<passwordLength; i++) {
			if (strchr(password, '@') || strchr(password, '#')) {
				count++;
			}
		}
		if (count != 0) {
			if (strcmpi(password, username)!=0) {
				printf("Password validated through all checks\n");
				return 0;
			}
			else {
				printf("*password not validated\n");
				return 0;
			}
		}
		else {
			printf("**Password not validated\n");
			return 0;
		}
		
	}
	else {
		printf("**Password not validated\n");
		return 0;
	}
	
}
