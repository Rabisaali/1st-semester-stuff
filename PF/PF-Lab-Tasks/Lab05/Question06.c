#include <stdio.h>
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    /*eg: n=5 ... 
    while printing the first line the value of n is still 5 
    but after the execution of the printf command is done... now the value of n is 6 
    and this new value is now stored in the n variable.*/
    printf("In case of post increment the value of n is still: %d\n", n++);//here n would be the same number provided by the user
    printf("After the post increment has been done and the previous command has been executed the value is: %d\n", n);//the incremented value would be printed over here

    printf("**********************************************************************************\n");

    /*now the value of n is whatever the incremented value is.... for eg: 6
    For pre increment:
    the value of n would be incremented first then the printf command will be executed i.e n=7 
    This new value is now stored in the n variable*/
    printf("In case of pre increment the value of n is %d\n", ++n);//here n would be the incremented value of n
    printf("After the pre increment has been done and the previous command has been executed the value is still: %d\n", n);//here too the same value of n would be printed
    return 0;
}