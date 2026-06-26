#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main () {

    //asking the user to input the number of elements
    int n;
    printf("Enter the number of elements that you want to enter: ");
    scanf("%d", &n);

    //initializing a pointer to the array which will be dynamically allocated used calloc
    int* ptr;
    ptr = (int*)calloc(n, sizeof(int));

    // if the dynamic allocation fails ...... exit the program
    if (ptr==NULL) {
        printf("Memory allocation failed.\n");
        printf("Terminating the program......\n");
        return 1;
    }

    //All initial values (all zeros)
    printf("\nInitial array values (all set to 0):\n");
    for (int i=0; i<n; i++) {
        printf("%d ", *(ptr+i));
    }

    printf("\n");

    // asking the user if they want to enetr some other values
    char inputResponse[4];
    printf("Do you wish to enter some other values? ");
    scanf("%s", inputResponse);

    // if the response is yes... then take the input

    if (strcasecmp(inputResponse, "Yes")==0) {

        // asking the user to input the numbers
        for (int i=0; i<n; i++) {
            printf("Enter the element number %d: ", i+1);
            scanf("%d", (ptr+i));
        }

        // outputting that inputted array
        printf("Outputting the array......\n");
        for (int i=0; i<n; i++) {
            printf("%d ", *(ptr+i));
        }

        printf("\n");
    }
    
    // asking the user if they want to enlarge the array or not
    char choice[4];
    printf("Do you wish to enlarge the array? ");
    scanf("%s", choice);

    // if yes....
    if (strcasecmp(choice, "yes")==0) {

        // then ask for the new size
        int num;
        printf("Enter the new size of array: ");
        scanf("%d", &num);

        //using realloc to enlarge the array 
        int* temp = (int*) realloc (ptr, num*sizeof(int));

        // if the memory allocation fails end the program
        if (temp==NULL) {
            printf("Memory allocation failed.\n");
            printf("Terminating the program......\n");

            // freeing the previously stored memory
            free(ptr);
            return 1;
        }

        else {
            ptr = temp; // assigning the new address only if successfull
        }

        //ask the user for additional elements
        for (int i=n; i<num; i++) {
            printf("Enter the element number %d: ", i+1);
            scanf("%d", ptr+i);
        } 

        // outputting the new array
        printf("Outputting the new array: \n");
        for (int i=0; i<num; i++) {
            printf("%d ", *(ptr+i));
        }

        printf("\n");
    }
    
    // freeing the pointer
    free(ptr);
    printf("Exiting program....... after freeing the memory\n");
    return 0;
}
