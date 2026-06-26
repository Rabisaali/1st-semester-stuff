#include <stdio.h>
#include <string.h>
int main () {
	char Qualification[10];
	char Response[10];
	
	printf("Enter your qualification (For undergraduate enter UG, for masters enter MS): ");
	scanf("%s", Qualification);
	
	if (strcmp(Qualification, "MS") == 0)
	{
		printf("Have you passed the interview? (Enter Yes for passed and No for failed): ");
		scanf("%s", Response);
		
		if (strcmp(Response, "Yes") == 0)
		{
			printf("You are hired\n");
		}
		else
		{
			printf("Better luck next time\n");
		}
	}
	else 
	{
		printf("You are not eligible\n");
	}
	return 0;
}
