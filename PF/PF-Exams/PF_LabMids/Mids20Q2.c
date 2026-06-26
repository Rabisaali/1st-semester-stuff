#include <stdio.h>
int main () {
    int n;
    float avgM, avgF;
    int m=0, f=0;
    float sumM=0, sumF=0;
    long int salaryM, salaryF;
    printf("For how many total employees do you want to calcultae average: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        char c;
        printf("Enter the first letter: ");
        scanf(" %c", &c);

        if (c =='M' || c =='m') {
            printf("Enter the salary: ");
            scanf("%ld", &salaryM);
            sumM += salaryM;
            m++;
            printf("\n");
        }
        
        else if (c =='F' || c =='f') {
            printf("Enter the salary: ");
            scanf("%ld", &salaryF);
            sumF += salaryF;
            f++;
            printf("\n");
        }
    }
    avgM = sumM/m;
    avgF = sumF/f;

    printf("The average salary of females is %f and males is %f\n", avgF, avgM);
    return 0;
}