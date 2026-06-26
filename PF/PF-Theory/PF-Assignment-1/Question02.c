#include <stdio.h>
int main () {
    int x;
    int y;
    printf("Enter the x-cordinate: ");
    scanf("%d", &x);
    printf("Enter the y-cordinate: ");
    scanf("%d", &y);

    if(x==0)
    {
        printf("Your point lies on y axis\n");
    }
    else if(y==0)
    {
        printf("Your point lies on x axis\n");
    }
    else if (x>0 && y>0)
    {
        printf("Your point lies in Quadrant I\n");
    }
    else if (x<0 && y>0)
    {
        printf("Your point lies in Quadrant II\n");
    }
    else if (x<0 && y<0)
    {
        printf("Your point lies in Quadrant III\n");
    }
    else 
    {
        printf("Your point lies in Quadrant IV\n");
    }
    return 0;
}