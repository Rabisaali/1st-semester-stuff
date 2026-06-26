#include <stdio.h>
int main () {
    int i, low, high;
    int a[10] = {0,1,1,1,0,1,0,0,1,0};
    int temp;
    low=0; high=9;
    while (low<=high) {
        switch(a[low]) {
            case 0:
                low++;
                break;
            case 1:
                temp=1;
                for (i=low; i<10; i++) {
                    if (a[i]==0) {
                        a[low] = 0;
                        a[i] = 1;
                    }
                }
                high++;
                break;
            default:
                break;
        }
    }
    for (i=0; i<10; i++) 
    {
        printf("%d ", a[i]);
    }
}