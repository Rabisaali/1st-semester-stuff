#include <stdio.h>
int main () {
    int chosenum[6], drawnnum[7];
    printf("Enter your 6 chosen numbers: ");
    for (int i=0; i<6; i++) {
        scanf("%d", &chosenum[i]);
    }
    printf("Enter your drawn numbers: ");
    for (int i=0; i<7; i++) {
        scanf("%d", &drawnnum[i]);
    }
    int flagadd=0, addnum;
    int counts[6] = {0, 0, 0, 0, 0, 0};
    int count=0;
    for (int i=0; i<6; i++) {
        if (drawnnum[6]==chosenum[i]) {
            flagadd++;
            addnum=chosenum[i];
            break;
        }
    }
    int k=0;
    for (int i=0; i<6; i++) {
        for (int j=0; j<6; j++) {
            if (drawnnum[i]==chosenum[j]) {
                counts[k++]=drawnnum[i];
                count++;
            }
        }
    }
    printf("Matched Numbers: ");
    for (int i=0; i<k; i++) {
        printf("%d ", counts[i]);
    }
    if (flagadd==1) printf("Additional number: %d\n", addnum);
    if (count==6) printf("Prize 1\n");
    else if (count == 5 && flagadd==1) printf("Prize 2\n");
    else if (count == 5) printf("Prize 3\n");
    else printf("No prize\n");   
}