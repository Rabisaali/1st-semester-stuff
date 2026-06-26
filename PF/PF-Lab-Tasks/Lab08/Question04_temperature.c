#include <stdio.h>
int main () {
    float array[7][3];
    float average[7];
    for (int i=0; i<7; i++) {
        float sum=0;
        printf("Enter the tempertaure values of day %d\n", i+1);
        for (int j=0; j<3; j++) {
            switch(j) {
                case 0:
                    printf("For morning: ");
                    scanf("%f", &array[i][j]);
                    sum+=array[i][j];
                    break;
                case 1:
                    printf("For afternoon: ");
                    scanf("%f", &array[i][j]);
                    sum+=array[i][j];
                    break;
                case 2:
                    printf("For night: ");
                    scanf("%f", &array[i][j]);
                    sum+=array[i][j];
                    break;
            }
        }
        average[i] = sum/3;
    }

    for (int i=0; i<7; i++) {
        printf("\nFor day %d:\n", i+1);
        printf("The average temperature value is %f\n", average[i]);
        printf("Temperature values for each shift are: ");
        for (int j=0; j<3; j++) {
            printf("%f\t", array[i][j]);
        }
    }
}