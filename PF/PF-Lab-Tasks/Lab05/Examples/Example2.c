#include <stdio.h>
int main () {
    char start,e;
    printf("Please say starting letter of the country: ");
    scanf(" %c", &start);
    switch (start)
    {
        case 'a':
        case 'A':
            printf("Please say ending letter: ");
            scanf(" %c", &e);
            switch (e)
            {
                case 'A':
                case 'a':
                    printf("\nAlaska\nAlbania\nAlgeria");
                    break;
                default:
                    printf("\nNo such country\n");
            }
            break;

        case 'b':
        case 'B':
            printf("Please say ending letter: ");
            scanf(" %c", &e);
            switch (e)
            {
                case 'A':
                case 'a':
                    printf("Bulgeria\nBolivia\nBotswana\n");
                    break;
                default:
                    printf("No such country\n");
            }
            break;
        default:
            printf("Please type correct letter\n");
    }
    return 0;
}