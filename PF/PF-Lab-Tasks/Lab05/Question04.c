#include <stdio.h>
int main () {
    char continent, country;
    printf("Enter the continent\nFor Europe enter 'E' and for Asia enter 'A': ");
    scanf(" %c", &continent);

    switch (continent) {
        case 'E':
            printf("Enter the country name\nFor France enter 'F' and for Germany enter 'G': ");
            scanf(" %c", &country);
            switch (country) {
                case 'F':
                    printf("You selected France in Europe\n");
                    break;
                case 'G':
                    printf("You selected Germany in Europe\n");
                    break;
                default:
                    printf("Country not found in the dataset\n");
            }
            break;
        case 'A':
            printf("Enter the country name\nFor Pakistan enter 'P' and for India enter 'I': ");
            scanf(" %c", &country);
            switch (country) {
                case 'P':
                    printf("You selected Pakistan in Asia\n");
                    break;
                case 'I':
                    printf("You selected India in Asia\n");
                    break;
                default:
                    printf("Country not found in the dataset\n");
            }
            break;
        default:
            printf("Continent not found in the dataset\n");
    }
    return 0;
}