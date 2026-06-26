#include <stdio.h>
int main () {
    int marks [5][3] = {{80, 75, 90}, {60, 70, 65}, {78, 82, 88}, {92, 85, 89}, {55, 60, 58}};
    int TotalMarks[5];

    for (int i=0; i<5; i++) {
        int sum=0;
        for (int j=0; j<3; j++) {
            sum += marks[i][j];
        }
        printf("The total marks of student number %d are %d\n", i+1, sum);
    }

    int sumSubject1=0;
    int sumSubject2=0;
    int sumSubject3=0;

    for (int i=0; i<5; i++) {
        for (int j=0; j<3; j++) {
            switch (j) {
                case 0:
                    sumSubject1+=marks[i][j];
                    break;
                case 1:
                    sumSubject2+=marks[i][j];
                    break;
                case 2:
                    sumSubject3+=marks[i][j];
                    break;
            }
        }
    }
    float average1 = sumSubject1/5.0;
    float average2 = sumSubject2/5.0;
    float average3 = sumSubject3/5.0;

    printf("Average marks of subject 1 are %f, subject 2 are %f, and subject 3 are %f", average1, average2, average3);
}   