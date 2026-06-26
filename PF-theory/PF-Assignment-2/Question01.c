#include <stdio.h>
#include <string.h>
#include <strings.h>
int isbns[100];
char titles[100][50];
float prices[100];
int quantities[100];
int i=0;

void AddNewBook (int isbn, char* title, float price, int quantity);
void ProcessASale (int isbn, int quantity);
void LowStockReport (void);

int main () {
    int choice;
    char option[3];

    printf("----Welcome to Liberty Books----\n");

    printf("\nDo you want to manage inventory?\nTo do so, enter YES\nElse enter NO\n");
    scanf("%s", option);
    
    while ((strcasecmp(option, "YES") == 0)) {
        
        printf("\nMenu:\nFor Adding a New Book enter 1\nFor Processing a Sale enter 2\nFor Generating Low-Stock Report enter 3\n");
        scanf("%d", &choice);
        int isbn, quantity;
        char title[50];
        float price;

        switch(choice) {
            case 1:
                printf("Enter ISBN: ");
                scanf("%d", &isbn);
                printf("Enter the title of the book: ");
                scanf(" %[^\n]", title);
                printf("Enter the price: ");
                scanf("%f", &price); 
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                AddNewBook(isbn, title, price, quantity);
                break;
            case 2:
                printf("Enter the ISBN number: ");
                scanf("%d", &isbn);
                printf("Enter the number of copies sold: ");
                scanf("%d", &quantity);
                ProcessASale (isbn, quantity);
                break;
            case 3:
                LowStockReport();
                break;
            default:
                printf("Enter a valid code!\n");       
        }
        printf("\nDo you want to manage inventory again?\nEnter YES to continue\nEnter NO to exit\n");
        scanf("%s", option);
    }
return 0;
}

void AddNewBook (int isbn, char *title, float price, int quantity) {
    for (int j=0; j<i; j++) {
        if (isbn == isbns[j]) {
            printf("Duplicate ISBN! Error!\n");
            return;
        }
    }
    isbns[i] = isbn;
    strcpy(titles[i], title);
    prices[i] = price;
    quantities[i] = quantity;
    printf("Book Record Added!\n");
    i++;
    return;
}

void ProcessASale (int isbn, int quantity) {
    for (int j=0; j<i; j++) {
        if (isbn==isbns[j]) {
            if ((quantities[j]-quantity)<0) {
                int OutOfStock = (quantity-quantities[j]);
                quantities[j] = 0;
                printf("%d Books Out of Stock!\n", OutOfStock);
                return;
            }
            else {
                quantities[j] = (quantities[j]-quantity);
                printf("Sale Successfull\n");
                return;
            }
        }
    }
    printf("Enter a valid ISBN number!");
    return;
}

void LowStockReport (void) {
    int found = 0;
    printf("\n----Low-Stock Report----\n");
    for (int j=0; j<i; j++) {
        if (quantities[j] < 5) {
            printf("ISBN: %d\tTITLE: %s\tPRICE: %f\tQUANTITY: %d\n", isbns[j], titles[j], prices[j], quantities[j]);
            found ++;
        }
    }
    if (found == 0) {
        printf("All books have sufficient stock");
    }
    return;
}