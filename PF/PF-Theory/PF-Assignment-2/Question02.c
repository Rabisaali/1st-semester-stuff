#include <stdio.h>
#include <strings.h>
#include <string.h>

int ProductCode[]={001, 002, 003, 004};
int QuantityInStock[]={50, 10, 20, 8};
int PricePerProduct[]={100, 200, 300, 150};
int Products = sizeof(ProductCode)/sizeof(int);
int totalBill=0;
float finalBill=0;
char name[50];
long int cnic;


void CustomerInformation (void);
void DisplayInventory(void);
int UpdateInventory(void);
void AddItemToTheCart(void);
void TotalBill (void);
void Invoice(void);

int main () {
    printf("----Welcome to the supermarket----\n");
    int Continue;
    do {
        int choice;
        printf("\nTo enter your details enter 0\nTo display inventory enter 1\nTo update the inventory enter 2\nTo add an item to the cart enter 3\nTo display total bill enter 4\nTo show invoice enter 5\nTo exit the system enter 6\n");
        scanf("%d", &choice);
        
        switch (choice) {
            case 0:
                CustomerInformation();
                break;
            case 1:
                DisplayInventory();
                break;
            case 2:
                UpdateInventory();
                break;
            case 3:
                AddItemToTheCart();
                break;
            case 4:
                TotalBill();
                break;
            case 5:
                Invoice();
                break;
            case 6:
                return 0;
            default:
                printf("Enter a valid code\n");
        }

        printf("Do you wish to continue?\nEnter 1 to continue\nEnter 0 to exit the program\n");
        scanf("%d", &Continue);
    } while ((Continue==1));
    return 0;
}

void CustomerInformation (void) {
    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    printf("Enter your cnic number: ");
    scanf("%ld", &cnic);
    return;
}

void DisplayInventory (void) {
    printf("Product Code\tQuantity in Stock\tPrice per Product\n");
    for (int i=0; i<Products; i++) {
        printf("%d \t\t\t%d \t\t\t\t%d\t\t\t\n", ProductCode[i], QuantityInStock[i], PricePerProduct[i]);
    }
    return;
}

int UpdateInventory(void) {
    int productCode, quantity;
    printf("Please enter the product code: ");
    scanf("%d", &productCode);
    for (int i=0; i<Products; i++) {
        if (productCode == ProductCode[i]) {
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            if ((QuantityInStock[i]-quantity) < 0) {
                printf("Error generated!\nEnter the quantity within range\n");
                return 1;
            }
            else {
                QuantityInStock[i]-=quantity;
                printf("Inventory updated successfully!\n");
                totalBill += (quantity*PricePerProduct[i]);
                return totalBill;
            }   
        }
    }
    printf("Error generated!\nEnter correct product code\n");
    return 1;

}


void AddItemToTheCart(void) {
    int status = UpdateInventory();
    if (status != 1) {
        printf("Item added to the cart!\n");
        return;
    }
    return;
}

void TotalBill () {
    char promocode[50];
    char answer[3];
    printf("Your total bill is %d\n", totalBill);
    printf("Do you have a promocode: ");
    scanf("%s", answer);
    if (strcasecmp(answer, "yes") == 0) {
        printf("Enter the promocode: ");
        scanf("%s", promocode);
        if (strcmp(promocode, "Eid2025") == 0) {
            printf("Discount Applied\n");
            finalBill = totalBill*0.75;
            return;
        }
    }
    return;
}

void Invoice (void) {
    if (finalBill != 0) {
        printf("Name: %s\nCnic Number: %ld\nBill: %f\n", name, cnic, finalBill);
        printf("Bill without discount: %d\nBill with Discount: %f\n", totalBill, finalBill);
    }
    else {
        printf("No discount applied\n");
        printf("Name: %s\nCnic Number: %ld\nBill without discount: %d", name, cnic, totalBill);
    }
return;
}


