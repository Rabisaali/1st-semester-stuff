#include <stdio.h>
#include <ctype.h>
int main () {
    int age;
    char eyesightExam;
    char writtenTest;
    char drivingTest;
    char medicalFitnessCertificate;

    printf("Enter you age: ");
    scanf("%d", &age);
    if(age >= 18) {

        printf("Have you passed(P) or failed(F) your eyesight exam\nEnter P for passed and F for failed: ");
        scanf(" %c", &eyesightExam);

        if(toupper(eyesightExam) == 'P') {
            printf("Have you passed(P) or failed(F) your written test\nEnter P for passed and F for failed: ");
            scanf(" %c", &writtenTest);

            if(toupper(writtenTest) == 'P') {
                printf("Have you passed(P) or failed(F) your driving test\nEnter P for passed and F for failed: ");
                scanf(" %c", &drivingTest);

                if(toupper(drivingTest) == 'P') {
                    if(age>60) {
                        printf("Do you have a medical fitness certificate?\nEnter Y for yes and N for no: ");
                        scanf(" %c", &medicalFitnessCertificate);

                        if(toupper(medicalFitnessCertificate) == 'Y') {
                            printf("You are eligible for the license.\n");
                        }
                        else {
                           printf("You are ineligible.\n");
                        }
                    }
                    else {
                        printf("You are eligible for the license.\n");
                    }
                }
                else {
                    printf("You are ineligible for license.\n");
                }
            }
            else {
                printf("You need to retake the written test.\n");
            }
        }
        else {
            printf("You might need a prescription for glasses.\n");
        }
    }
    else {
        printf("You are ineligible.\n");
    }
    return 0;
}