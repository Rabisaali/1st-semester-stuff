#include <stdio.h>
#include <strings.h>
int main () {
    int age;
    char gender[10];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter you gender: ");
    scanf("%s", gender);

    if (age >= 18) {
        if (strcasecmp(gender, "Male")==0) {
            printf("Adult Male\n");
        }
        else if (strcasecmp(gender, "Female")==0) {
            printf("Adult Female\n");
        }
    }
    else {
        printf("Minor\n");
    }
    return 0;
}