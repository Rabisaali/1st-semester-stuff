#include <stdio.h>
int main () {
    char array[100];
    int sum=0;
    int j=0;
    int newArray[100];
    printf("Enetr your text: ");
    scanf("%[^\n]", array);

    for (int i=0; i<100; i++) {
        if(array[i] >= '0' && array[i] <= '9') {
            newArray[j] = array[i];
            sum+=(newArray[j]-'0');
            j++;
        }
    }
    
    printf("%d", sum);
    
    return 0;
}