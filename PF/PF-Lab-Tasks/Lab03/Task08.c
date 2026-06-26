#include <stdio.h>
int main ()
{
    float Subject1Marks;
    float Subject2Marks;
    float Subject3Marks;
    printf("Enter the marks obtained in subject 1 out of 100: ");
    scanf("%f", &Subject1Marks);
    printf("Enter the marks obtained in subject 2 out of 100: ");
    scanf("%f", &Subject2Marks);
    printf("Enter the marks obtained in subject 3 out of 100: ");
    scanf("%f", &Subject3Marks);

    float Percentage = ((Subject1Marks + Subject2Marks + Subject2Marks) * 100 ) / 300;
    printf("The percentage obtained is %f%%\n", Percentage);
    return 0;
}