#include <stdio.h>
int main () {
    int Attendance;
    int Marks;

    printf("Enter your attendance percentage: ");
    scanf("%d", &Attendance);
    printf("Enter your internal marks: ");
    scanf("%d", &Marks);

    if (Attendance >= 75 && Marks >= 40) {
        printf("You are allowed to sit in the exams\n");
    }
    else {
        printf("You are not allowed to sit in the exams\n");
    }
    return 0;
}