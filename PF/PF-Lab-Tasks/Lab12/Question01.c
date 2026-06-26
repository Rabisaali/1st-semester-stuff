#include <stdio.h>
#include <stdlib.h>
int main () {
    int n;
    //asking the number of elements from user
    printf("How many elements do you wnat to store: ");
    scanf("%d", &n);
    // initialiazing the pointer to the array
    int* ptr;
    // dynamically aloocation the memory for the array
    ptr = (int*) malloc (n*sizeof(int));
    //checking if the dynamic allocation failed then end the program
    if (ptr==NULL) {
        printf("Memory Allocation Failed.\n");
        printf("Terminating the program.....\n");
        return 1;
    }
    // else taking input from the user and storing it the form of arrays... with the help of pointers
    for (int i=0; i<n; i++) {
        printf("Enter the element number %d: ", i+1);
        scanf("%d", ptr+i);
    }
    // outputting the list
    printf("Outputing the list: ");
    for (int i=0; i<n; i++) {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    // freeing the memory
    free(ptr);
    printf("Memory successfully freed... ending the program\n");
    return 0;
}