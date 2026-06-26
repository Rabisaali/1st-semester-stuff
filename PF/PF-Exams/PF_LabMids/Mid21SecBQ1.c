#include <stdio.h>
#include <strings.h>
int main () {
    char response[4];
    int product_code, quantity;
    int retail_value=0;
    int retail_price;

    do {
        printf("Do you want to enter product code: ");
        scanf("%s", response);
        if (strcasecmp(response, "Yes")==0) {
            printf("Enter the product code: ");
            scanf("%d", &product_code);
            printf("Enter the quantity you want: ");
            scanf("%d", &quantity);

            switch (product_code) {
                case 1:
                    retail_price = 2000;
                    retail_value += quantity*retail_price;
                    break;
                case 2:
                    retail_price = 500;
                    retail_value += quantity*retail_price;
                    break;
                case 3:
                    retail_price = 200;
                    retail_value += quantity*retail_price;
                    break;
                case 4:
                    retail_price = 23400;
                    retail_value += quantity*retail_price;
                    break;
                default:
                    printf("Invalid code\n");
            }
        }
        else {
            break;
        }
    } while (strcasecmp(response, "Yes")==0);

    printf("%d", retail_value);


    return 0;
}