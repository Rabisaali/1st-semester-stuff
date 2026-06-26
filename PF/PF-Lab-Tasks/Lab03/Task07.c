#include <stdio.h>
int main ()
{
    float Length;
    float Width;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &Length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &Width);

    float Area = Length*Width;
    float Perimeter = 2*(Length + Width);

    printf("The Area of the rectangle is %f and the Perimeter is %f\n", Area, Perimeter);
    return 0;
}