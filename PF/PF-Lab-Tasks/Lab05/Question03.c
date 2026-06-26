#include <stdio.h>
int main () {
    int device, brand;
    printf("Select your device\nFor Phone type '1'\nFor Laptop type '2'\n");
    scanf("%d", &device);

    switch (device) {
        case 1:
            printf("Choose brand\nFor Samsung type '1'\nFor Apple type '2'\n");
            scanf("%d", &brand);
            switch (brand) {
                case 1:
                    printf("You selected a Samsung phone\n");
                    break;
                case 2:
                    printf("You selected an Apple phone\n");
                    break;
                default:
                    printf("Device brand not found!\n");    
            }
            break;
        case 2:
            printf("Choose brand\nFor Dell type '1'\nFor HP type '2'\n");
            scanf("%d", &brand);
            switch (brand) {
                case 1:
                    printf("You selected a Dell laptop\n");
                    break;
                case 2:
                    printf("You selected an HP laptop\n");
                    break;
                default:
                    printf("Device brand not found!\n");
            }
            break;
        default:
            printf("Device type unclear!\n");
    }
    return 0;
}